#include <iostream>
using namespace std;
int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		long long int m=0;
		cin >> n;
		for (int i=1;i<=n;i++){
			long long int a;
			cin >> a;
			m+=a%=n;
			if (m>=n) m%=n;
		}
		if (m==0){
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}