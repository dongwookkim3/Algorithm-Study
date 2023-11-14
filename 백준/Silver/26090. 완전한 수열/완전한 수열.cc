#include <iostream>
#define MAX 500
#define AMAX 1000000
using namespace std;
int main(){
	bool B[AMAX+1]={1,1};
	for (long long i=2;i<=AMAX;i++){
		if (B[i]==0){
			for (long long j=(long long)i*i;j<=AMAX;j+=i){
				B[j]=1;
			}
		}
	}
	int n,t=0;
	long long A[MAX+1]={};
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
		A[i]+=A[i-1];
	}
	for (int i=1;i<=n;i++){
		for (int j=i;j<=n;j++){
			if (B[j-i+1]==0){
				if (B[A[j]-A[i-1]]==0){
					t++;
				}
			}
		}
	}
	cout << t;
	return 0;
}