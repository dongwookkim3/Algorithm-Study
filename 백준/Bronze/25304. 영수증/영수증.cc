#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d\n%d",&a,&b);
	for (;b!=0;b--)
	{
		scanf("%d %d",&c,&d);
		a=a-c*d;
	}
	if (a==0) printf("Yes");
	else printf("No");
	return 0;
}