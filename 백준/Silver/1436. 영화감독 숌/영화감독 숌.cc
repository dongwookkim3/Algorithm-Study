#include <iostream>
using namespace std;
int f(int a){
	int m=0;
	while(a>0){
		if (a%1000==666) m++;
		a/=10;
	}
	return m;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m=0;
	cin >> n;
	for (int i=1;;i++){
		if (f(i)>=1){
			m++;
			if (m==n){
				cout << i;
				return 0;
			}
		}
	}
}