#include <iostream>
using namespace std;
long GCD(long A,long B){
	if (!B) return A;
	else return GCD(B,A%B);
}
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    	long long n,A[101]={},m=0;
    	cin >> n;
		for (int i=1;i<=n;i++){
			cin >> A[i];
		}
		for (int i=1;i<n;i++){
			for (int j=i+1;j<=n;j++){
				m+=GCD(A[i],A[j]);
			}
		}
		cout << m << "\n";
	}
    return 0;
}