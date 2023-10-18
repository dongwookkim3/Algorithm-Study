#include <iostream>
#include <cmath>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;
	cin >> n;
	while(n--){
		long long a,i,j;
		cin >> a;
		if (a==0) a+=2;
		else if (a==1) a++;
		for (i=a;;i++){
			bool m=0;
			for (j=2;j<=sqrt(i);j++){
				if (i%j==0){
					m=1;
					break;
				}
			}
			if (m==0){
				cout << i << "\n";
				break;
			}
		}
	}
	return 0;
}