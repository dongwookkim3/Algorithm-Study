#include <iostream>
using namespace std;
int main(){
	long long int A,B,C;
	cin >> A >> B >> C;
	long long int S1=A*B/C,S2=A*C/B;
	if (S1>=S2) cout << S1;
	else cout << S2;
	return 0;
}