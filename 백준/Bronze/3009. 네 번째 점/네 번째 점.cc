#include <iostream>
using namespace std;
int main(){
	int A[1001]={},B[1001]={};
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for (int i=1;i<=3;i++){
		int a,b;
		cin >> a >> b;
		A[a]++;
		B[b]++;
	}
	for (int i=1;i<=1000;i++){
		if (A[i]%2==1) cout << i << " ";
	}
	for (int i=1;i<=1000;i++){
		if (B[i]%2==1) cout << i;
	}
	return 0;
}