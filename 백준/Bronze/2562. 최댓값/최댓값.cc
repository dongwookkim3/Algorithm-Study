#include <stdio.h>
int main()
{
	int max=-100000000,a=1,b,c;
	for (;a<10;a++)
	{
		scanf("%d",&b);
		if(b>max)
		{
			max = b;
			c=a;
		}
	}
	printf("%d\n%d",max,c);
	
	
	
	return 0;
}