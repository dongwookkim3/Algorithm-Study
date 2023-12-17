#include <iostream>
using namespace std;
int main(){
	int n;
	string s;
	cin >> n >> s;
	if (s=="miss") cout << 0;
	else if (s=="bad") cout << 200*n;
	else if (s=="cool") cout << 400*n;
	else if (s=="great") cout << 600*n;
	else cout << 1000*n;
	return 0;
}