#include <stdio.h>
int main()
{
	int a,b1,b2,b3;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%d %d %d",&b1,&b2,&b3);
		if (b2>b1+b3) printf("advertise\n");
		else if (b2==b1+b3) printf("does not matter\n");
		else printf("do not advertise\n");
	}
	return 0;
}

