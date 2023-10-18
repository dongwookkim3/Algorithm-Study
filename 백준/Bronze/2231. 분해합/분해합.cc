#include <iostream>
using namespace std;
int f(int a){
	int t=0;
	while(a>0){
		t+=a%10;
		a/=10;
	}
	return t;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i=1;i<=10000000;i++){
		if (i+f(i)==n){
			cout << i;
			return 0;
		}
	}
	cout << 0;
	return 0;
}