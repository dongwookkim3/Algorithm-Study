#include <iostream>
using namespace std;
int f(int n){
	if (n>9) return f(n/10)+f(n%10);
	else return n;
}
int main(){
	int n,t=0;
	cin >> n;
	for (int i=1;i<=n;i++){
		if (i%f(i)==0) t++;
	}
	cout << t;
	return 0;
}