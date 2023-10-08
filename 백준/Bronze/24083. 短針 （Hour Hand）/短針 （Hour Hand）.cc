#include <iostream>
using namespace std;
int main(){
	int A,B;
	cin >> A >> B;
	if ((A+B)%12!=0) cout << (A+B)%12;
	else cout << 12;
	return 0;
}