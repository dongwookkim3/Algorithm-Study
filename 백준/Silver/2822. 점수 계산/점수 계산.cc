#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int A[8]={},B[8]={};
	for (int i=0;i<=7;i++){
		cin >> A[i];
		B[i]=A[i];
	}
	sort(A,A+8);
	int m=0;
	for (int i=3;i<=7;i++){
		m+=A[i];
	}
	cout << m << "\n";
	for (int i=0;i<=7;i++){
		for (int j=3;j<=7;j++){
			if (B[i]==A[j]){
				cout << i+1 << " ";
			}
		}
	}
	return 0;
}