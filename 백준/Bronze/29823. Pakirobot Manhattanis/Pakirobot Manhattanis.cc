#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,a=0,b=0;
	string A;
	cin >> n;
	getchar();
	getline(cin,A);
	for (int i=0;i<n;i++){
		if (A[i]=='N') a++;
		else if (A[i]=='S') a--;
		else if (A[i]=='E') b++;
		else if (A[i]=='W') b--;
	}
	cout << abs(a)+abs(b);
	return 0;
}