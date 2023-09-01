#include <stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%d",&b);
		c+=b;
	}
	printf("%d",c);
	return 0;
}