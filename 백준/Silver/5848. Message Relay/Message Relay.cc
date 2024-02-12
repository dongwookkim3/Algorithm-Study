#include <iostream>
#define MAX 1000
using namespace std;
int main(){
	int n,m=0;
	int A[MAX+1]={};
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			A[j]=A[A[j]];
		}
	}
	for (int i=1;i<=n;i++){
		if (A[i]==0) m++;
	}
	cout << m;
	return 0;
}
