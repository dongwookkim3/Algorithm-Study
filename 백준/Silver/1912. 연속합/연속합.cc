#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;
int main(){
	int n,m1=-1000,m2=0;
	int A[MAX+1]={};
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
		m1=max(m1,A[i]);
	}
	int m3=0;
	for (int i=1;i<=n;i++){
		if (A[i]+m3>=0){
			m3+=A[i];
			m2=max(m2,m3);
		}
		else {
			m3=0;
		}
	}
	if (m2==0) cout << m1;
	else cout << max(m1,m2);
	return 0;
}