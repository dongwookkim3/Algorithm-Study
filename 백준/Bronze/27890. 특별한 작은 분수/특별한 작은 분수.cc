#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int x,n;
	cin >> x >> n;
	while(n--){
		if (x%2==0) x=(x/2)^6;
		else x=(2*x)^6;
	}
	cout << x;
	return 0;
}