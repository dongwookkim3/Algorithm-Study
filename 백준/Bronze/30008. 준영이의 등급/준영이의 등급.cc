#include <iostream>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	for (int i=1;i<=k;i++){
		int a;
		cin >> a;
		float t=a*100/n;
		if (t<=4) cout << 1 << " ";
		else if (t<=11) cout << 2 << " ";
		else if (t<=23) cout << 3 << " ";
		else if (t<=40) cout << 4 << " ";
		else if (t<=60) cout << 5 << " ";
		else if (t<=77) cout << 6 << " ";
		else if (t<=89) cout << 7 << " ";
		else if (t<=96) cout << 8 << " ";
		else if (t<=100) cout << 9 << " ";
	}
	return 0;
}