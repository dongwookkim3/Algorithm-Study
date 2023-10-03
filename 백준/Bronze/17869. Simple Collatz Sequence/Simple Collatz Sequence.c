#include <stdio.h>
int main(){
	long long int n,m=0;
	scanf("%lld",&n);
	while(n!=1){
		if (n%2==0){
			n/=2;
		}
		else n++;
		m++;
	}
	printf("%lld",m);
	return 0;
}