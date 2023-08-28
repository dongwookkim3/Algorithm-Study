#include <stdio.h>
int main()
{
	int a,b,c,d=0;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%d",&b);
		for (;b>0;b--)
		{
			scanf("%d",&c);
			d+=c;
		}
		printf("%d\n",d);
		d=0;
	}
	return 0;
}

