#include <stdio.h>
int main()
{
	int i,a,c,min=10000,len=0;
	char b[11],minm[11];
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%s %d",&b,&c);
		if (c<min)
		{
			len=0;
			for (i=0;b[i]!=NULL;i++)
			{
				minm[i]=b[i];
				len++;
			}
			min=c;
		}
		
		
		
	}
	for (i=0;i<len;i++)
	{
		printf("%c",minm[i]);
	}
	
	
	
	
	
	
	
	
	
	
	

	return 0;
}