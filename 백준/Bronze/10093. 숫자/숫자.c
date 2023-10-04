#include <stdio.h>
int main(){
	long long int a,b;
	scanf("%lld %lld",&a,&b);
	if (a==b){
		printf("0");
		return 0;
	}
	else if (a<b){
		printf("%lld\n",b-a-1);
		for (long long int i=a+1;i<b;i++) printf("%lld ",i);
	}
	else {
		printf("%lld\n",a-b-1);
		for (long long int i=b+1;i<a;i++) printf("%lld ",i);
	}
	return 0;
}