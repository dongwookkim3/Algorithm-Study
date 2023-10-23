#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,k,A[501]={},m=0;
		cin >> n >> k;
		for (int i=1;i<=n;i++){
			int a;
			cin >> a;
			A[a]++;
		}
		for (int i=1;i<=k;i++){
			if (A[i]!=0) m++; 
		}
		cout << n-m << "\n";
	}
	return 0;
}