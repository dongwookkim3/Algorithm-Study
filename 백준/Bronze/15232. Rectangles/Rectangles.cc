#include <stdio.h>
int main()
{
	int a,b,i,j;
	scanf("%d\n%d",&a,&b);
	for (i=0;a>i;i++)
	{
		for (j=0;b>j;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}