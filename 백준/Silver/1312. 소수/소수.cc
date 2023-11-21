#include <iostream>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int A,B,n,t;
	cin >> A >> B >> n;
	A%=B;
	for (int i=1;i<=n;i++){
		A*=10;
		t=A/B;
		A%=B;
	}
	cout << t;
	return 0;
}