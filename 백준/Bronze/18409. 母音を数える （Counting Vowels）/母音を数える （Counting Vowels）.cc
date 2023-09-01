#include <stdio.h>
int main()
{
	int a,c=0;
	char b;
	scanf("%d",&a);
	for (;a>-1;a--)
	{
		scanf("%c",&b);
		if (b=='a'||b=='e'||b=='i'||b=='o'||b=='u')
		{
			c+=1;
		}
		
		
		
		
	}
	printf("%d",c);
	
	
	
	
	
	
	
	
    return 0;
}