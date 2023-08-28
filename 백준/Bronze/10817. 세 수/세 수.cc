#include <stdio.h>
int main()
{
	int a,b,c,max=0,min=10000000,T;
	scanf("%d %d %d",&a,&b,&c);
	T=a+b+c;
	if (a>max) max=a;
	if (b>max) max=b;
	if (c>max) max=c;
	if (a<min) min=a;
	if (b<min) min=b;
	if (c<min) min=c;
	printf("%d",T-max-min);
	return 0;
}