#include <stdio.h>
int main()
{
	int max=-100000000,min=10000000000,a,b;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%d",&b);
		if(b>max) max = b;
		if(b<min) min = b;
	}
	printf("%d %d",min,max);
	
	
	
	return 0;
}