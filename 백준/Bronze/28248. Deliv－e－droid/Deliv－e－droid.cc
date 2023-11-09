#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	if (n>m) cout << n*50+m*-10+500;
	else cout << n*50+m*-10;
	return 0; 
}