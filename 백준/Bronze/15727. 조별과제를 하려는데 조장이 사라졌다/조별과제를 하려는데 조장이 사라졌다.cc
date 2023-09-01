#include <stdio.h>
int main()
{
	long long int a,b;
	scanf("%lld",&a);
	if(a%5==0) printf("%lld ",a/5);
	else printf("%lld",a/5+1);
	
	return 0;
}