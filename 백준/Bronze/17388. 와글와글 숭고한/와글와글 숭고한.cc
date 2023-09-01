#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a+b+c>=100) printf("OK");
	else
	{
		if(a<b && a<c) printf("Soongsil");
        else if (b<c && b<a) printf("Korea");
        else if (c<b && c<a) printf("Hanyang");
	}
	return 0;
}