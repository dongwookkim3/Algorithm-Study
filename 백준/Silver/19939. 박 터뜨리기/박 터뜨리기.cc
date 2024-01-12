#include <iostream>
#include <algorithm>
#define MAX 100000
#define KMAX 1000
using namespace std;
int main(){
	int n,k;
	long long S[MAX+1]={};
	for (int i=1;i<=MAX;i++){
		S[i]+=S[i-1]+i;
	}
	cin >> n >> k;
	if (n<S[k]) cout << -1;
	else {
		if (k==2){
			if (n%2==0){
				cout << 2;
			}
			else {
				cout << 1;
			}
			return 0;
		}
		int A[KMAX+1]={};
		for (int i=1;i<k;i++){
			A[i]=i;
		}
		A[k]=n-S[k-1];
		while(A[k]>A[k-1]+k){
			for (int i=1;i<k;i++){
				A[i]++;
			}
			A[k]-=k-1;
		}
		if (A[k]>A[k-1]+2){
			for (int i=k-(A[k]-A[k-1])+2;i<k;i++){
				A[i]++;
			}
			A[k]=A[k-1]+1;
		}
		cout << A[k]-A[1];
	}
	return 0;
}