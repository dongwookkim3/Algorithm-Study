#include <iostream>
#define MAX 4000000
using namespace std;
bool f(int i,int k){
	if (i%10==k) return 1;
	else if (i<=9) return 0;
	else return f(i/10,k);
}
int main(){
	int A[MAX+1]={1,1};
	for (long long i=2;i<=MAX;i++){
		if (A[i]==0){
			for (long long j=(long long)i*i;j<=MAX;j+=i){
				A[j]=1;
			}
		}
	}
	int a,b,k,m=0;
	cin >> a >> b >> k;
	for (int i=a;i<=b;i++){
		if (A[i]==0 && f(i,k)){
			m++;
		}
	}
	cout << m;
	return 0;
}