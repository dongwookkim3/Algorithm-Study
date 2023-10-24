#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    	int n,A[101]={},max=0;
    	string B[101]={};
    	cin >> n;
    	for (int i=1;i<=n;i++){
    		cin >> A[i] >> B[i];
    		if (A[i]>max) max=A[i];
		}
		for (int i=1;i<=n;i++){
    		if (A[i]==max){
    			cout << B[i];
			}
		}
		cout << "\n";
	}
    return 0;
}