#include <iostream>
using namespace std;
int main(){
	int n,m=0;
	cin >> n;
	for (int i=1;i<=n;i++){
		int a;
		cin >> a;
		m+=a;
	}
	m+=(n-1)*8;
	cout << m/24 << " " << m%24;
	return 0;
}