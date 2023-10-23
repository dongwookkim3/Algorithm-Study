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
		int A[6]={};
		for (int i=1;i<=5;i++){
			cin >> A[i];
		}
		sort(A+1,A+6);
		if (A[4]-A[2]>=4){
			cout << "KIN\n";
			continue;
		}
		cout << A[2]+A[3]+A[4] << "\n";
	}
	return 0;
}