#include <iostream>
#include <algorithm>
#define MAX 1500
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n;
	int A[MAX*MAX+1]={};
	cin >> n;
	for (int i=0;i<n*n;i++){
		cin >> A[i];
	}
	sort(A,A+n*n);
	cout << A[n*(n-1)];
	return 0;
}