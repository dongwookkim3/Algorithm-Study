#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%d %d",&b,&c);
		if (b>=0&&b<=23&&c>=0&&c<=59) printf("Yes ");
		else printf("No ");
		if (b>=1&&b<=12&&c>=1) 
		{
			if (b==1||b==3||b==5||b==7||b==8||b==10||b==12)
			{
				if (c<=31) printf("Yes\n");
				else printf("No\n");
			}
			else if (b==4||b==6||b==9||b==11)
			{
				if (c<=30) printf("Yes\n");
				else printf("No\n");
			}
			else if (b==2)
			{
				if (c<=29) printf("Yes\n");
				else printf("No\n");
			}
			else printf("No\n");
		}
		else printf("No\n");
	}
	 
	
	
	
	
	
	
	
	
	
	return 0;
}
