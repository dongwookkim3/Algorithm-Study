#include <stdio.h>
int main()
{
	int a,b,max=0,min=1000000;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%d",&b);
		if (b>max) max=b;
		if (b<min) min=b;
	}
	printf("%d",max-min);
	return 0;
}