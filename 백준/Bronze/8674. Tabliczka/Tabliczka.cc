#include <iostream>
using namespace std;
int main(){
	long long A,B;
	cin >> A >> B;
	if (A%2==0 || B%2==0) cout << 0;
	else cout << min(A,B); 
	return 0;
}