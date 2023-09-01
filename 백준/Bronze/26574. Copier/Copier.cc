#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%d",&b);
		printf("%d %d\n",b,b);
	}
	return 0;
}