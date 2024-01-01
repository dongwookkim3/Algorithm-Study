#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if ((n+1)%(n%100)==0) cout << "Good\n";
		else cout << "Bye\n"; 
	}
	return 0;
}