#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	if (n==m) cout << n*2;
	else cout << min(n,m)*2+1;
	return 0; 
}