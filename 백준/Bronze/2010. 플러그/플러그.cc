#include <stdio.h>
int main()
{
	int a,b,c=0,A;
	scanf("%d",&a);
	A=a;
	for (;a>0;a--)
	{
		scanf("%d",&b);
		c+=b;
	}
	c=c-A+1;
	printf("%d",c);
	return 0;
}

