#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d\n%d",&a,&b,&c,&d);
	for(;;)
	{
		if(d>=3600)
		{
			a+=1;
			d-=3600;
		}
		else if(d>=60)
		{
			b+=1;
			d-=60;
		}
		else
		{
			c+=d;
			break;
		}
	}
	for(;;)
	{
		if (c>=60)
		{
			b+=1;
			c-=60;
		}
		else if (b>=60)
		{
			a+=1;
			b-=60;
		}
		else if(a>=24) a-=24;
		else break;
	}
	printf("%d %d %d",a,b,c);
	return 0;
}