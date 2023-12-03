#include <iostream>
using namespace std;
int f(int n,int m){
	if (n%10==3 || n%10==6 || n%10==9) m++;
	if (n>9) return f(n/10,m);
	else return m;
}
int main(){
	int n,m=0;
	cin >> n;
	for (int i=1;i<=n;i++){
		m+=f(i,0);
	}
	cout << m;
	return 0;
}