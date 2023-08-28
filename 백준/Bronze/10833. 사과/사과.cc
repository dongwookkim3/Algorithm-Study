#include <stdio.h>
int main()
{
	int a,b,c,d=0;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%d %d",&b,&c);
		if (c%b!=0) d=d+c%b;
	}
	printf("%d",d);
	return 0;
}

