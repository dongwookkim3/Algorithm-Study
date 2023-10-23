#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,max=0,min=100;
		cin >> n;
		while(n--){
			int a;
			cin >> a;
			if (a>max) max=a;
			if (min>a) min=a;
		}
		cout << (max-min)*2 << "\n";
	}
	return 0;
}