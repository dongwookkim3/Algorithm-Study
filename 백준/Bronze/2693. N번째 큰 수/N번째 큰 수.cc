#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	for (int i=1;i<=t;i++){
		int A[1001]={},n=0;
		for (int j=1;j<=10;j++){
			int a;
			cin >> a;
			A[a]++;
		}
		for (int i=1000;;i--){
			if (A[i]==1) n++;
			if (n==3){
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}