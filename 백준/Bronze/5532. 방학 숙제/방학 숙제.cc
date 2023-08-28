#include <stdio.h>
int main()
{
	int a,b,c,d,e,X,Y;
	scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
	if (b%d!=0) X=b/d+1;
	else X=b/d;
	if (c%e!=0) Y=c/e+1;
	else Y=c/e;
	if(X>=Y) printf("%d",a-X);
	else printf("%d",a-Y);
	
	
	
	
	
	
	return 0;
}