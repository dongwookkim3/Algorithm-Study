#include <stdio.h>
int main()
{
	int a,b,c,A_S=100,B_S=100;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%d %d",&b,&c);
		if (b>c) B_S-=b;
		if (c>b) A_S-=c;
	}
	printf("%d\n%d",A_S,B_S);
	
	
	
	
	
	
	
	return 0;
}

