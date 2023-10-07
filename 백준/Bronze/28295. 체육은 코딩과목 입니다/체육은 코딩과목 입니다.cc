#include <iostream>
using namespace std;
int main(){
	int A=0;
	for (int i=1;i<=10;i++){
		int a;
		cin >> a;
		if (a==1) A+=90;
		else if (a==2) A+=180;
		else A-=90;
	}
	while(1){
		if (A>=360) A-=360;
		else if (A<0) A+=360;
		else break;
	}
	if (A==0) cout << "N";
	else if (A==90) cout << "E";
	else if (A==180) cout << "S";
	else cout << "W";
	return 0;
}