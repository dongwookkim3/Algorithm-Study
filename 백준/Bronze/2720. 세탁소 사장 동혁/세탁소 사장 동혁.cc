#include <stdio.h>
int main()
{
	int a,b,b1=0,b2=0,b3=0,b4=0;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%d",&b);
		while(1)
		{
		if (b>=25)
		{
			b-=25;
			b1+=1;
		}
		else if (b>=10)
		{
			b-=10;
			b2+=1;
		}
		else if (b>=5)
		{
			b-=5;
			b3+=1;
		}
		else if (b>=1)
		{
			b-=1;
			b4+=1;
		}
		else break;
		}
		printf("%d %d %d %d\n",b1,b2,b3,b4);
		b1=0,b2=0,b3=0,b4=0;
	}
	return 0;
}