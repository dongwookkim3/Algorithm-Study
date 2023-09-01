#include <stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%d %c",&b,&c);
		for (;b>0;b--)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	

	return 0;
}