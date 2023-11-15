#include <iostream>
#include <cmath>
#define MAX 10000
using namespace std;
int main(){
	int n;
	int A[MAX+1]={};
	long long m=0; 
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (i==j) continue;
			m+=abs(A[i]-A[j]);
		}
	}
	cout << m;
	return 0;
}