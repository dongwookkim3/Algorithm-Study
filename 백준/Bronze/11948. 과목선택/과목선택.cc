#include <stdio.h>
int main()
{
	int a1,a2,a3,a4,b1,b2,min1=100000000,min2=100000000;
	scanf("%d\n%d\n%d\n%d\n%d\n%d",&a1,&a2,&a3,&a4,&b1,&b2);
	for (;;)
	{
		if (a1<min1) min1=a1;
		else if (a2<min1) min1=a2;
		else if (a3<min1) min1=a3;
		else if (a4<min1) min1=a4;
		else
		{
			if (b1<min2) min2=b1;
			else if (b2<min2) min2=b2;
			else break;
		}
	}
	printf("%d",a1+a2+a3+a4+b1+b2-min1-min2);
	
	return 0;
}