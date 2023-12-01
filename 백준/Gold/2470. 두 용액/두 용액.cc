#include <iostream>
#include <algorithm>
#include <climits>
#define MAX 100000
using namespace std;
int A[MAX];
void binarysearch(int left,int right,int MIN,int min_index,int max_index){
    if (left>=right){
        cout << A[min_index] << ' ' << A[max_index];
        return;
    }
    int m=A[left]+A[right];
    if (abs(m)<MIN){
        min_index=left;
        max_index=right;
        MIN=abs(m);
    }
    if (m>0){
        return binarysearch(left,--right,MIN,min_index,max_index);
    }
    else if (m<0){
        return binarysearch(++left,right,MIN,min_index,max_index);
    }
    else {
        cout << A[min_index] << ' ' << A[max_index];
        return;
    }
}
int main(){
	int n,MIN=INT_MAX;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> A[i];
	}
	sort(A,A+n);
	int left=0,right=n-1;
	binarysearch(left,right,MIN,0,0);
	return 0;
}