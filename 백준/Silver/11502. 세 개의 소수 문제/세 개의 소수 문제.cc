#include <iostream>
#define MAX 1000
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	bool A[MAX+1]={1,1,};
	for (int i=2;i<=MAX;i++){
		if (!A[i]){
			for (int j=i*i;j<=MAX;j+=i){
				A[j]=1;
			}
		}
	}
	cin >> t;
	while(t--){
		int n,m=0;
		cin >> n;
		for (int i=2;i<=n;i++){
			if (A[i]) continue;
			for (int j=i;i+j<=n;j++){
				if (A[j]) continue;
				for (int k=j;i+j+k<=n;k++){
					if (A[k]) continue;
					if (i+j+k==n){
						cout << i << ' ' << j << ' ' << k << "\n";
						m=1;
						break;
					}
				}
				if (m) break;
			}
			if (m) break;
		}
		if (!m) cout << 0 << "\n";
	}
	return 0;
}