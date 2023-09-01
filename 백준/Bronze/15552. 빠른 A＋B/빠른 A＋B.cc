#include <stdio.h>
int main()
{
	int a,b,c,i;
	scanf("%d",&c);
	for (i=0;i<c;i++)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
	return 0;
}