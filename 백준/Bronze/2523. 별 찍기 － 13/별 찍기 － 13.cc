#include <iostream>
using namespace std;
int main(){
	int n,i=0;
	cin >> n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=i;j++){
			if (i==j) cout << "*\n";
			else cout << "*";
		}
	}
	for (int i=n-1;i>=1;i--){
		for (int j=1;j<=i;j++){
			if (i==j) cout << "*\n";
			else cout << "*";
		}
	}
	return 0;
}