#include <iostream>
using namespace std;
int main(){
	/*
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	*/
	int n;
	string A;
	cin >> n;
	getchar();
	getline(cin,A);
	for (int i=n-5;i<=n-1;i++){
		cout << A[i];
	}
	return 0;
}