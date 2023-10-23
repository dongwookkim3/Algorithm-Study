#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for (int i=0;n>0;n/=2,i++){
			if (n%2==1) cout << i << " ";
		}
		cout << "\n";
	}
	return 0;
}