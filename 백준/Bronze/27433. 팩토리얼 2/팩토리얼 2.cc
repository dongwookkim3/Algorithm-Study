#include <stdio.h>
int main()
{
	long long int a,b,c;
	scanf("%lld",&a);
	b=1;
	c=a;
	for (;a>0;a--)
	{
		b=b*a;
		
	}
	if (c==0) printf("1");
	else printf("%lld",b);
	
	
	
	
	
	
	
	
    return 0;
}