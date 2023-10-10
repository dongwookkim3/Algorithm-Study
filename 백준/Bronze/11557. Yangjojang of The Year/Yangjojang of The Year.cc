#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int B[101]={},max=0;
		string A[101];
		for (int i=1;i<=n;i++){
			cin >> A[i] >> B[i];
			if (B[i]>max) max=B[i];
		}
		for (int i=1;i<=n;i++){
			if (B[i]==max){
				cout << A[i] << "\n";
			}
		}
	}
	return 0;
}