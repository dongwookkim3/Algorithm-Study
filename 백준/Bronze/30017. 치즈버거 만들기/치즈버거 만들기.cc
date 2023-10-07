#include <iostream>
using namespace std;
int main(){
	int a,b,m=0;
	cin >> a >> b;
	a--;
	m++;
	for (int i=1;;i++){
		if (a>=i && b>=i) m+=2;
		else break;
	}
	cout << m;
	return 0;
}