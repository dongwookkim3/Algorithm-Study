#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin >> n;
	long* A = new  long[n+1];
	for (int i=1;i<=n;i++){
		cin >> A[i];
		A[i]+=A[i-1];
	}
	cin >> m;
	while(m--){
		int a,b;
		cin >> a >> b;
		cout << A[b]-A[a-1] << "\n";
	}
	return 0;
}