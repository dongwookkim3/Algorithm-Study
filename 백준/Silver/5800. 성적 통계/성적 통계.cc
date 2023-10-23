#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int k=1;k<=t;k++){
		int n,A[51]={},max=0,min=100,ab=0;
		cin >> n;
		for (int i=1;i<=n;i++){
			cin >> A[i];
			if (A[i]>max) max=A[i];
			if (A[i]<min) min=A[i];
		}
		sort(A+1,A+n+1);
		for (int i=2;i<=n;i++){
			if (abs(A[i-1]-A[i])>ab) ab=abs(A[i-1]-A[i]);
		}
		cout << "Class " << k << "\n";
		cout << "Max " << max << ", " << "Min " << min << ", " << "Largest gap " << ab << "\n";
	}
	return 0;
}