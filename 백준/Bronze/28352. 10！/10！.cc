#include <iostream>
using namespace std;
int main(){
	long int n,m=1;
	cin >> n;
	for (int i=2;i<=n;i++){
		m*=i;
	}
	for (long int i=1;;i++){
		if (i*7*24*60*60==m){
			cout << i;
			return 0;
		}
	}
}