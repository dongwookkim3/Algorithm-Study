#include <iostream>
using namespace std;
bool f(int n){
	if (n%10!=4 && n%10!=7) return 0;
	if (n<=9) return 1;
	else return f(n/10);
}
int main(){
	int A,B,m=0;
	cin >> A >> B;
	for (int i=A;i<=B;i++){
		if (f(i)){
			m++;
		}
	}
	cout << m;
	return 0;
}