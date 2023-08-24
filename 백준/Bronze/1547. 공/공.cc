#include <stdio.h>
int main()
{
	int a,b,c,d=1;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%d %d",&b,&c);
		if (d==b) d=c;
		else if (d==c) d=b;
	}
	printf("%d",d);
	
	
	return 0;
}