#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;
int main(){
	int n;
	int A[MAX+1]={10000};
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	sort(A+1,A+n+1);
	for (int i=1;i<=n;i++){
		if (A[i]!=A[i-1]){
			cout << A[i] << ' ';
		}
	}
	return 0;
}