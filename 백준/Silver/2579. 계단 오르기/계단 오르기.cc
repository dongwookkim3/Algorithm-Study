#include <iostream>
#include <algorithm>
#define MAX 300
using namespace std;
int main(){
	int n;
	int A[MAX+1]={};
	int D[MAX+1]={};
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	D[1]=A[1];
	D[2]=max(A[2],A[1]+A[2]);
	D[3]=max(A[1]+A[3],A[2]+A[3]);
	for (int i=4;i<=n;i++){
		D[i]=max(D[i-2]+A[i],A[i-1]+A[i]+D[i-3]);
	}
	cout << D[n];
	return 0;
}