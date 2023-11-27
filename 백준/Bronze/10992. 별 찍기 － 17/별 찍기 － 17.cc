#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for (int i=1;i<n;i++){
		for (int j=n;j>i;j--){
			cout << ' ';
		}
		for (int j=1;j<=i*2-1;j++){
			if (j==1 || j==i*2-1) cout << '*';
			else cout << ' ';
		}
		cout << "\n";
	}
	for (int i=1;i<=n*2-1;i++){
		cout << '*';
	}
	return 0;
}