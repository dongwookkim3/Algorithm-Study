#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,A[50]={},B[50]={};
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> A[i];
		B[i]=A[i];
	}
	sort(B,B+n);
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (A[i]==B[j]){
				cout << j << " ";
				B[j]=0;
				break;
			}
		}
	}
	return 0;
}