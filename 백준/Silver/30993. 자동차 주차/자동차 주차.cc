#include <iostream>
using namespace std;
long long nCr(int n,int k){
	if (n==k || k==0) return 1;
	else return nCr(n-1,k-1)+nCr(n-1,k);
}
int main(){
	int n,A,B,C;
	cin >> n >> A >> B >> C;
	cout << nCr(n,A)*nCr(n-A,B);
	return 0;
}