#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int A[1000001]={1,1,};
	for (int i=2;i<=1000000;i++){
		if (!A[i]){
			for (long long j=(long long)i*i;j<=1000000;j+=i){
				A[j]++;
			}
		}
	}
	int t;
	cin >> t;
	while(t--){
		int n,m=0;
		cin >> n;
		for (int i=2;i<=n/2;i++){
			if (!A[i] && !A[n-i]){
				m++;
			}
		}
		cout << m << "\n";
	}
	return 0;
}