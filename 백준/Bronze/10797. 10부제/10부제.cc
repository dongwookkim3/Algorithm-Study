#include <stdio.h>
int main()
{
	int a,X=5,Y,Z=0;
	scanf("%d",&a);
	while(X!=0)
	{
		scanf("%d",&Y);
		if (a==Y) Z+=1;
		X-=1;
	}
	printf("%d",Z);
	return 0;
}