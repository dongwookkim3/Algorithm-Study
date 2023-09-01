#include <stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d\n%d",&a,&b);
	if (a>b) printf("1");
	else if (a<b) printf("-1");
	else printf("0");
	return 0;
}