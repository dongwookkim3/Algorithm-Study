#include <iostream>
using namespace std;
int main(){
	int y1,y2,m1,m2,d1,d2;
	cin >> y1 >> m1 >> d1;
	cin >> y2 >> m2 >> d2;
	int A,B=y2-y1+1,C=y2-y1;
	if (m1*30+d1<=m2*30+d2) A=C;
	else A=C-1;
	cout << A << endl << B << endl << C;
	return 0;
}