#include <iostream>
using namespace std;
int main(){
	int A,B,K,X,m=0;
	cin >> A >> B;
	cin >> K >> X;
	for (int i=K-X;i<=K+X;i++){
		if (i>=A && i<=B) m++;
	}
	if (m!=0) cout << m;
	else cout << "IMPOSSIBLE";
	return 0;
}