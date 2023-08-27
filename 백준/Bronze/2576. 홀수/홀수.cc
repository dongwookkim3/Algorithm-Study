#include <stdio.h>
int main()
{
	int a,b=0,min=100000000,c=7;
	for (;c>0;c--)
	{
		scanf("%d",&a);
		if (a%2==1)
		{
			b+=a;
			if (a<min) min=a;
		}
		
	}
	if (b==0&&min==100000000) printf("-1");
	else printf("%d\n%d",b,min);
	return 0;
}