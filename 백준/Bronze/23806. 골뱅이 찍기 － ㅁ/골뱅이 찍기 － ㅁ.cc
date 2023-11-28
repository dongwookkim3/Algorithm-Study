#include <iostream>
using namespace std;
int main(){
	int n;
	cin>> n;
	for (int i=1;i<=n*5;i++){
		for (int j=1;j<=n*5;j++){
			if (i<=n || i>=4*n+1 || j<=n || j>=4*n+1){
				cout << '@';
			}
			else {
				cout << ' ';
			}
		}
		cout << "\n";
	}
	return 0;
}