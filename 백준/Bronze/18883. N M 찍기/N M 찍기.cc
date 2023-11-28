#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		for (int j=1;j<m;j++){
			cout << (i-1)*m+j << ' ';
		}
		cout << i*m << "\n";
	}
	return 0;
}