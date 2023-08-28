#include <stdio.h>
int main()
{
	int a1,a2,b1,b2;
	scanf("%d %d\n%d %d",&a1,&a2,&b1,&b2);
	for (;;)
	{
		a2=a2-b1;
		b2=b2-a1;
		if (a2<=0&&b2<=0)
		{
		printf("DRAW");
		break;
		}
		else if (a2<=0)
		{
			printf("PLAYER B");
			break;
		}
		else if (b2<=0)
		{
			printf("PLAYER A");
			break;
		}
	}
	
	
	return 0; 
}