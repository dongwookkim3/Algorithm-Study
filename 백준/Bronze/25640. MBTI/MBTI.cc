#include <stdio.h>
int main()
{
	int b,d=0;
	char a[11],c[11];
	scanf("%s",a);
	scanf("%d",&b);
	for (;b>0;b--)
	{
		scanf("%s",c);
		if (a[0]==c[0])
		{
			if (a[1]==c[1])
			{
				if (a[2]==c[2])
				{
					if (a[3]==c[3])
					d+=1;
				}
			}
		}
	}
	printf("%d",d);
	
	
	
	return 0; 
}