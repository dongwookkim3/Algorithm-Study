#include <stdio.h>
int main()
{
	int a,i;
	char b[101];
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%s",b);
		for (i=0;b[i]!=NULL;i++)
		{
			if (b[i]<95) printf("%c",b[i]+32);
			else printf("%c",b[i]);
		}
		printf("\n");
	}
	
	
    return 0;
}