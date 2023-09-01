#include <stdio.h>
int main()
{
	int a1,a2,a3,b1,b2,b3,c1,c2,c3;
	scanf("%d %d %d",&a1,&a2,&a3);
	scanf("%d %d %d",&c1,&c2,&c3);
	b1=c1-a3;
	b2=c2/a2;
	b3=c3-a1;
	printf("%d %d %d",b1,b2,b3);
	
	
	
	return 0;
}