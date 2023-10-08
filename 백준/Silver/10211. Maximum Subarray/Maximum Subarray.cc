#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t=0;
	cin >> t;
	while(t--){
		int n,A[1001]={},m=-1000000;
		cin >> n;
		for (int i=1;i<=n;i++){
			cin >> A[i];
		}
		for (int i=1;i<=n;i++){
			int b=0;
			for (int j=i;j<=n;j++){
				b+=A[j];
				if (b>m) m=b;
			}
		}
		cout << m << "\n";
	}
	return 0;
}