#include <stdio.h>
int main()
{
	int a,b=0;
	for (;;)
	{
		scanf("%d",&a);
		if (a==-1) break;
		b+=a;
	}
	printf("%d",b);
	
	return 0;
}