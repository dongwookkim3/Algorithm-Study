#include <iostream>
#define MAX 32768
using namespace std;
int main(){
	bool A[MAX+1]={1,1};
	for (int i=2;i<=MAX;i++){
		if (A[i]==0){
			for (int j=i*i;j<=MAX;j+=i){
				A[j]=1;
			}
		}
	}
	while(1){
		long long n,m=0;
		cin >> n;
		if (n==0) return 0;
		for (int i=2;i<=n/2;i++){
			if (A[i]==0 && A[n-i]==0){
				m++;
			}
		}
		cout << m << "\n";
	}
}