#include <iostream>
#include <algorithm>
#define MAX 10000
using namespace std;
int main() {
	int n,k;
	int A[MAX+1]={};
	cin >> n >> k;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	while(1){
		int b=0;
		for (int i=1;i<n;i++){
			if (A[i]>A[i+1]){
				int t=A[i];
				A[i]=A[i+1];
				A[i+1]=t;
				b++;
				k--;
				if (k==0){
					cout << A[i] << ' ' << A[i+1];
					return 0;
				}
			}
		}
		if (b==0) break;
	}
	cout << -1;
    return 0;
}