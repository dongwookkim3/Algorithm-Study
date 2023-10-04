#include <stdio.h>
int main(){
	long long int t;
	scanf("%lld",&t);
	for (int i=1;i<=t;i++){
		long long int n;
		scanf("%lld",&n);
		printf("%lld\n",n*n);
	}
	return 0;
}