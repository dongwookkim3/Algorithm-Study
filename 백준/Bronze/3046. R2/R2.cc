#include<stdio.h>
int main()
{
	long long int a,b;
	scanf("%lld %lld",&a,&b);
	if (a-b<0) printf("%lld",2*b-a);
	else if (a-b>0) printf("%lld",-(a-2*b));
	else printf("%lld",a);
	
	
	
	
	
    return 0;
}
