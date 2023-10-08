#include <iostream>
using namespace std;
int main(){
	int n,m;
	string A[1001];
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	cin >> m;
	for (int i=1;i<=m;i++){
		int a,b;
		cin >> a >> b;
		for (int j=a;j<=b;j++){
			cout << A[j] << "\n";
		}
	}
	return 0;
}