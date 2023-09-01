#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d\n%d",&a,&b,&c);
	if ((a+b)-2*c>=0) printf("%d",(a+b)-2*c);
	else printf("%d",a+b);
	return 0;
}