#include <iostream>
using namespace std;
int main(){
	int n,m=0;
	cin >> n;
	for (int i=64;i>=1;i/=2){
		if (n/i){
			n-=i;
			m++;
		}
	}
	cout << m;
	return 0;
}