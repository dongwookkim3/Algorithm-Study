#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		int a;
		cin >> a;
		if (a>=300) cout << 1 << " ";
		else if (a>=275) cout << 2 << " ";
		else if (a>=250) cout << 3 << " ";
		else cout << 4 << " ";
	}
	return 0;
}