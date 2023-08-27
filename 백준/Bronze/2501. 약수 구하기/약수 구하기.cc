#include <stdio.h>
int main()
{
	int a,b,i,c=0;
	scanf("%d %d",&a,&b);
	for (i=1;a>=i;i++)
	{
		if (a%i==0)
		{
		c+=1;
		if (b==c) printf("%d",i);
		}
	}
	if (b>c) printf("0"); 
	
	
	
	
	
	
	return 0;
}