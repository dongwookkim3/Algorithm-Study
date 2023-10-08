#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,t=0;
	long long m,A[10001]={};
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	for (int i=1;i<=n;i++){
		int T=0;
		for (int j=i;j<=n;j++){
			T+=A[j];
			if (T==m){
				t++;
				break;
			}
			else if (T>m) break;
		}
	}
	cout << t;
	return 0;
}