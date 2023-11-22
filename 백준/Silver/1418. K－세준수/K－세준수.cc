#include <iostream>
#define MAX 100000
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int A[MAX+1]={};
	for (long long i=2;i<=MAX;i++){
		if (A[i]==0){
			for (long long j=(long long)i;j<=MAX;j+=i){
				A[j]=i;
			}
		}
	}
	int n,k,m=0;
	cin >> n >> k;
	for (int i=1;i<=n;i++){
		if (A[i]<=k) m++;
	}
	cout << m;
	return 0;
}