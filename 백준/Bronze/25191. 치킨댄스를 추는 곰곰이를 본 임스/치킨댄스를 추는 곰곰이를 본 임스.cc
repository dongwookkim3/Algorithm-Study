#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d=0;
	scanf("%d\n%d %d",&a,&b,&c);
	for (;;)
	{
		if (b>=2)
		{
			b-=2;
			d+=1;
		}
		else if (c>=1)
		{
			c-=1;
			d+=1;
		}
		else break;
	}
	if (a>=d) printf("%d",d);
	else printf("%d",a);
	return 0;
}