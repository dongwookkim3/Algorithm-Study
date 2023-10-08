#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,m=3;
	cin >> n;
	for (int i=n;i>=2;i--){
		m+=pow(2,i-1);
	}
	cout << m*m;
	return 0;
}