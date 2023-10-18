#include <iostream>
using namespace std;
int main(){
	int a,b,c,A[101]={},t=0;
	cin >> a >> b >> c;
	for (int i=1;i<=3;i++){
		int a,b;
		cin >> a >> b;
		for (int j=a+1;j<=b;j++){
			A[j]++;
		}
	}
	for (int i=1;i<=100;i++){
		if (A[i]==1) t+=a;
		else if (A[i]==2) t+=b*2;
		else if (A[i]==3) t+=c*3;
	}
	cout << t;
	return 0;
}