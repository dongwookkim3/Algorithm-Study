#include <iostream>
using namespace std;
int main(){
	int a=0,b=0,n;
	cin >> n;
	string A;
	getchar();
	getline(cin,A);
	for (int i=0;i<n;i++){
		if (A[i]=='A') a++;
		else b++;
	}
	if (a>b) cout << 'A';
	else if (b>a) cout << 'B';
	else cout << "Tie";
	return 0;
}