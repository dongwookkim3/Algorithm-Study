#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if (a<b||(a+b)%2==1||(a-b)%2==1) printf("-1");
	else printf("%d %d",(a+b)/2,(a-b)/2);
	 
	
	return 0;
}