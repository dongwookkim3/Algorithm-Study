#include <iostream>
using namespace std;
bool f(int n,int k){
	if (n%10==k) return 1;
	else if (n>9) return f(n/10,k);
	else return 0;
}
int main(){
	int n,k;
	cin >> n >> k;
	for (int i=1;;i++){
		if (!f(i,k)) n--;
		if (n==0){
			cout << i;
			return 0;
		}
	}
}