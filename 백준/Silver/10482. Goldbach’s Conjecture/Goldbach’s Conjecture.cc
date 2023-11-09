#include <iostream>
#define MAX 32000
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	bool A[MAX+1]={1,1,};
	for (long long i=2;i<=MAX;i++){
		if (!A[i]){
			for (long long j=(long long)i*i;j<=MAX;j+=i){
				A[j]=1;
			}
		}
	}
	int t;
	cin >> t;
	while(t--){
		int n,m=0,index=0;
		int B[1000]={};
		cin >> n;
		for (int i=2;i<=n/2;i++){
			if (A[i]) continue;
			for (int j=i;i+j<=n;j++){
				if (A[j]) continue;
				else if (i+j==n){
					m++;
					index++;
					B[index]=i;
				}
			}
		}
		cout << n << " has " << m << " representation(s)\n";
		for (int i=1;i<=index;i++){
			cout << B[i] << '+' << n-B[i] << "\n";
		}
		cout << "\n";
	}
	return 0;
}