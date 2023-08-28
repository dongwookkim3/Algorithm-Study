#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	b = b - 45;
	if (b<0)
	{
		b = b + 60;
		a = a - 1;
	}
	if (a<0)
	{
		a = a + 24;
	}
	printf("%d %d",a,b);
	return 0;
}