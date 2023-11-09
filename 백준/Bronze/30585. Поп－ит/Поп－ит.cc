#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,m,z=0,o=0;
	cin >> n >> m;
	getchar();
	for (int i=1;i<=n;i++){
		string A;
		getline(cin,A);
		for (int j=0;j<m;j++){
			if (A[j]=='0') z++;
			else o++;
		}
	}
	cout << min(z,o);
	return 0; 
}