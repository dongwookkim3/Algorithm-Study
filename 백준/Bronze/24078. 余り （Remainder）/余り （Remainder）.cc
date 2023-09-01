#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	while(1)
	{
		if (a>=21) a-=21;
		else break;
	}
	printf("%d",a);
	return 0;
}