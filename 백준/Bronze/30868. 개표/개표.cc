#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		for (int i=1;i<=a/5;i++){
			cout << "++++ ";
		}
		for (int i=1;i<=a%5;i++){
			cout << "|";
		}
		cout << "\n";
	}
	return 0;
}