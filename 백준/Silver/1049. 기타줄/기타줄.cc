#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,k,s1=1000,s2=1000;
	cin >> n >> k;
	for (int i=1;i<=k;i++){
		int a,b;
		cin >> a >> b;
		if (s1>a) s1=a;
		if (s2>b) s2=b;
	}
	if (s2*6<=s1){
		cout << n*s2;
	}
	else {
		int A=(n/6)*s1+(n%6)*s2;
		int B=ceil((float)n/6)*s1;
		if (A>=B) cout << B;
		else cout << A;
	}
	return 0;
}