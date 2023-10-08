#include <iostream>
using namespace std;
int main(){
	int x,k;
	cin >> x >> k;
	if (1000*x>=7000*k) cout << 7000*k;
	else if (1000*x>=3500*k) cout << 3500*k;
	else if (1000*x>=1750*k) cout << 1750*k;
	else cout << 0;
	return 0;
}