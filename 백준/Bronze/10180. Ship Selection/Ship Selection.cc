#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,d,m=0;
		cin >> n >> d;
		while(n--){
			float A,B,C;
			cin >> A >> B >> C;
			if (A*(B/C)>=d) m++;
		}
		cout << m << "\n";
	}
	return 0;
}