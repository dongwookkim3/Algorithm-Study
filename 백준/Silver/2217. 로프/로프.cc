#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;
int main(){
	int n,m=0;
	int A[MAX+1]={};
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	sort(A+1,A+n+1,greater<int>());
	for (int i=1;i<=n;i++){
		if (A[i]*i>m){
			m=A[i]*i;
		}
	}
	cout << m;
	return 0;
}