#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int A[1001]={},t=0,m=0,mi=0;
	for (int i=1;i<=10;i++){
		int a;
		cin >> a;
		t+=a/10;
		A[a]++;
		if (A[a]>m){
			m=A[a];
			mi=a;
		}
	}
	cout << t << "\n" << mi;
	return 0;
}