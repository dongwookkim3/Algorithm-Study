#include <iostream>
using namespace std;
int main(){
	int N,X,T=0;
	cin >> N >> X;
	while(N--){
		int a;
		cin >> a;
		T+=a;
	}
	if (T%X==0) cout << 1;
	else cout << 0;
	return 0;
}