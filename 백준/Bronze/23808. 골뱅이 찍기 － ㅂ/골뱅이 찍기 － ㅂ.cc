#include <iostream>
using namespace std;
int main(){
	int n;
	cin>> n;
	for (int i=1;i<=n*2;i++){
		for (int j=1;j<=n*5;j++){
			if (j<=n || j>=n*4+1) cout << '@';
			else cout << ' ';
		}
		cout << "\n";
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n*5;j++){
			cout << '@';
		}
		cout << "\n";
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n*5;j++){
			if (j<=n || j>=n*4+1) cout << '@';
			else cout << ' ';
		}
		cout << "\n";
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n*5;j++){
			cout << '@';
		}
		cout << "\n";
	}
	return 0;
}