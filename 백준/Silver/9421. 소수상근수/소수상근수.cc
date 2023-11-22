#include <iostream>
#define MAX 486
#define NMAX 1000000
using namespace std;
bool A[MAX+1]={};
void reset(){
	for (int i=0;i<=MAX;i++){
		A[i]=0;
	}
}
int prime(int n){
	int t=0;
	if (n==1) return 1;
	while(n!=0){
		t+=(n%10)*(n%10);
		n/=10;
	}
	if (A[t]) return 0;
	A[t]=1;
	return prime(t);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	bool B[NMAX+1]={1,1};
	for (long long i=2;i<=NMAX;i++){
		if (!B[i]){
			for (long long j=(long long)i*i;j<=NMAX;j+=i){
				B[j]=1;
			}
		}
	}
	cin >> n;
	for (int i=1;i<=n;i++){
		if (B[i]==0){
			reset();
			if (prime(i)==1){
				cout << i << "\n";
			}
		}
	}
	return 0;
}