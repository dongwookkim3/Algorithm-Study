#include <stdio.h>
int main()
{
	int a,b,c,T,a1,b1,c1;
	scanf("%d\n%d %d %d",&T,&a,&b,&c);
	a1=a-T;
	b1=b-T;
	c1=c-T;
	if (a1<0) a1=0;
	if (b1<0) b1=0;
	if (c1<0) c1=0;
	printf("%d",a+b+c-a1-b1-c1);
	return 0;
}