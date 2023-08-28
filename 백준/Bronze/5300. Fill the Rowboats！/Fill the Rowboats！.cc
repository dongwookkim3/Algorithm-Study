#include <stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	for (i=1;a>=i;i++)
	{
		printf("%d ",i);
		if (i%6==0) printf("Go! ");
	}
	if ((i-1)%6!=0) printf("Go!");
	return 0;
}