#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	for (;a>0;a--)
	{
		scanf("%d",&c);
		if (b>c) printf("%d ",c);	
	}
	return 0;
}