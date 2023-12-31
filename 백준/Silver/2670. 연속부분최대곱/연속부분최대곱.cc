#include <iostream>
#define MAX 10000
using namespace std;
int main(){
	int n;
	double A[MAX+1]={};
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	double max=0,m=1;
	cout << fixed;
	cout.precision(3);
	for (int i=1;i<=n;i++){
		m*=A[i];
		if (m<A[i]) m=A[i];
		if (m>max) max=m;
	}
	cout << max;
	return 0;
}