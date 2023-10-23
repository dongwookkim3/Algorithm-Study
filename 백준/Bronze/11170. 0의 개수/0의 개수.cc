#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,n=0;
		cin >> a >> b;
		if (!a){
			n++;
			a++;
		}
		for (int i=a;i<=b;i++){
			int m=i;
			while(m>0){
				if (m%10==0) n++;
				m/=10;
			}
		}
		cout << n << "\n";
	}
	return 0;
}