#include <iostream>
#define MAX 100000
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n,m,A[MAX+1]={},B[MAX+1]={};
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
		if (A[i-1]>A[i]){
			B[i]=B[i-1]+1;
		}
		else {
			B[i]=B[i-1];
		}
	}
	cin >> m;
	while(m--){
		int a,b;
		cin >> a >> b;
		cout << B[b]-B[a] << "\n";
	}
	return 0;
}