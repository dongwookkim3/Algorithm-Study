#include <iostream>
using namespace std;
int main(){
	int n,s=0,b=0,a=0;
	string A;
	cin >> n >> A;
	for (int i=0;i<A.length();i++){
		if (A[i]=='B') b++;
		else if (A[i]=='S') s++;
		else if (A[i]=='A') a++;
	}
	if (b==s && s==a) cout << "SCU";
	else if (b==s && b>a) cout << "BS";
	else if (b==a && b>s) cout << "BA";
	else if (s==a && s>b) cout << "SA";
	else if (b>s && b>a) cout << 'B';
	else if (s>b && s>a) cout << 'S';
	else cout << 'A';
	return 0;
}