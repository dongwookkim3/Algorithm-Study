#include <iostream>
using namespace std;
int main(){
	int A[10001]={};
	for (int i=2;i<=10000;i++){
		if (!A[i]){
			for (int j=i*i;j<=10000;j+=i){
				A[j]++;
			}
		}
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for (int i=n/2;i>=1;i--){
			if (!A[i] && !A[n-i]){
				cout << i << " " << n-i << "\n";
				break;
			}
		}
	}
	return 0;
}