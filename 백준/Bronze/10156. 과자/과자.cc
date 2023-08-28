#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a*b>c)	printf("%d",-(c-a*b));
	else printf("0");
	return 0;
}