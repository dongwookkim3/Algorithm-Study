#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		int n,k;
		int A[15]={};
		for (int i=1;i<=14;i++){
			A[i]=i;
		}
		cin >> n >> k;
		while(n--){
			for (int i=1;i<=k;i++){
				A[i]+=A[i-1];
			}
		}
		cout << A[k] << "\n";
	}
	return 0;
}