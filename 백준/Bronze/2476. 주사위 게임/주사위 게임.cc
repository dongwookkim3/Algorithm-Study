#include <stdio.h>
int main()
{
	int a,b,c,d,e,max=0,max1=0;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%d %d %d",&b,&c,&d);
		if (d==b&&b==c) e=10000+d*1000;
		else if (d==b) e=1000+d*100;
		else if (b==c) e=1000+b*100;
		else if (c==d) e=1000+d*100;
		else
		{
			if (b>max) max=b;
			if (c>max) max=c;
			if (d>max) max=d;
			e=max*100;
		}
		if (e>max1) max1=e;
	}
	printf("%d",max1);
	
	
	
	
	
	
	return 0;
}