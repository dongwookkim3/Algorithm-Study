#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d,T1=0,T2=0,T3;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	for (;;)
	{
		if (b>=d)
		{
			T1+=1;
			b-=d;
		}
		else if (c>=d)
		{
			T2+=1;
			c-=d;
		}
		else break;
	}
	T3=T1*T2;
	if (a>T3) printf("%d",T3);
	else printf("%d",a);
	
	return 0;
}