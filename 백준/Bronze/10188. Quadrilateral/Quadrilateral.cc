#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		for (int i=1;i<=b;i++){
			for (int j=1;j<=a;j++){
				cout << "X";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}