#include <iostream>
#include <algorithm>
#define MAX 20000
using namespace std;
int main(){
	int n,k,m=0;
	int B[MAX+1]={};
	string A;
	cin >> n >> k >> A;
	for (int i=1;i<=n;i++){
		if  (A[i-1]=='P') B[i]=1;
		else B[i]=2;
	}
	for (int i=1;i<=n;i++){
		if (B[i]==1){
			for (int j=max(0,i-k);j<=min(n,i+k);j++){
				if (B[j]==2){
					B[j]=0;
					m++;
					break;
				}
			}
		}
	}
	cout << m;
	return 0;
}