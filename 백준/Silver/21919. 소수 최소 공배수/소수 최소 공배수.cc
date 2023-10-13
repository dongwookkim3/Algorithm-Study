#include <iostream>
using namespace std;
#define MAX 1000000
bool A[MAX+1]={1,1,};
long long GCD(long long a,long long b){
	if (b==0) return a;
	else return GCD(b,a%b);
}
long long LCM(long long a,long long b){
	return a*b/GCD(a,b);
}
int main(){
	for (int i=2;i<=MAX;i++){
		if (!A[i]){
			for (long long j=(long long)i*i;j<=MAX;j+=i){
				A[j]=1;
			}
		}
	}
	int n;
	long long lcm=1;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		if (A[a]==0){
			lcm=LCM(lcm,a);
		}
	}
	if (lcm!=1) cout << lcm;
	else cout << -1;
	return 0;
}