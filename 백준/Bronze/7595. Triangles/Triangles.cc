#include <stdio.h>
int main()
{
	int a=0,b=0,i,j;
	for(;;)
	{
		scanf("%d",&a);
		if(a==0) break;
		for(i=1;i<=a;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("*");
			}
		printf("\n");
		}
	}
	return 0;
}