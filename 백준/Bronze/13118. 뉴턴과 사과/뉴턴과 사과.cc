#include <iostream>
using namespace std;
int main(){
	long int P[5]={};
	long int x,y,r,t=0;
	for (int i=1;i<=4;i++){
		cin >> P[i];
	}
	cin >> x >> y >> r;
	for (int i=1;i<=4;i++){
		if (P[i]==x) cout << i;
		else t++;
	}
	if (t==4) cout << 0;
	return 0;
}