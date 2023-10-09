#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int m=0;
	for (int i=1;i<=10;i++){
		int a;
		cin >> a;
		if (abs(m+a-100)<=abs(m-100)) m+=a;
		else break;
	}
	cout << m;
	return 0;
}