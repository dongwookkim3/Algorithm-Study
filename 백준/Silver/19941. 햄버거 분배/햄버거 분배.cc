// 19941
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,k,m=0;
	string A;
	cin >> n >> k >> A;
	for (int i=0;i<n;i++){
		if (A[i]=='P'){
			for (int j=max(0,i-k);j<=min(n,i+k);j++){
				if (A[j]=='H'){
					A[j]='N';
					m++;
					break;
				}
			}
		}
	}
	cout << m;
	return 0;
}