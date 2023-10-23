#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,A[1000001]={};
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> A[i];
	}
	sort(A,A+n);
	for (int i=n-1;i>=0;i--){
		cout << A[i] << "\n";
	}
	return 0;
}