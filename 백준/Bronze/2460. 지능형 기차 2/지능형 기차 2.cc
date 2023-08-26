#include <stdio.h>
int main()
{
	int a,b,c,d=0,max=0,i=10;
	for (;i>0;i--)
	{
		scanf("%d %d",&a,&b);
		c=b-a;
		d+=c;
		if (d>max) max=d;
	}
	printf("%d",max);
	
	
	
	
	return 0;
}