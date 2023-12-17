#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long n,r,m=0;
	cin >> n >> r;
	for (long long i=1;i<=sqrt(n-r);i++){
		if ((n-r)%i==0){
			if (i>r) m+=i;
			if ((n-r)/i>r) m+=(n-r)/i;
			if (i*i==n-r && i>r) m-=i;
		}
	}
	cout << m;
	return 0;
}