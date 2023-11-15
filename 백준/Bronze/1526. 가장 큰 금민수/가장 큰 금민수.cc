#include <iostream>
using namespace std;
bool f(int n){
	if ((n%10==4 || n%10==7) && n<=9) return 1;
	else if (n%10==4 || n%10==7) return f(n/10);
	else return 0;
}
int main(){
	int n;
	cin >> n;
	for (int i=n;;i--){
		if (f(i)){
			cout << i;
			return 0;
		}
	}
}