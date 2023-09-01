#include <stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d %d",&a,&b);
	for (;;)
	{
		if (a>=2&&b>=1)
		{
			a-=2;
			b-=1;
			c+=1;
		}
		else break;
	}
	printf("%d",c);
	return 0;
}