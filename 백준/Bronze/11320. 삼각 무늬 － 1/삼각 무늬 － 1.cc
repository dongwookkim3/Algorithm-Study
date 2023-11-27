#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		int A,B;
		cin >> A >> B;
		cout << (A*A)/(B*B) << "\n";
	}
	return 0;
}