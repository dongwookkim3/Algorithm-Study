#include <stdio.h>
int main()
{
	int a,b,c,d,e,max=0;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%d %d %d",&b,&c,&d);
		if (b==c+d) e=2*b*(c+d);
		else e=b*(c+d);
		if (e>max) max=e;
	}
	printf("%d",max);
	
	
	
	
	
	
	
	return 0; 
}