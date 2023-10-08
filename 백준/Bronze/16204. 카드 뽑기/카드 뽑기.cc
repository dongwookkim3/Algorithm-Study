#include <iostream>
using namespace std;
int main(){
	int n,m,k,t=0;
	cin >> n >> m >> k;
	t+=min(m,k);
	t+=min(n-m,n-k);
	cout << t;
	return 0;
}