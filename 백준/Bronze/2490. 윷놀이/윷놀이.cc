#include <stdio.h>
int main()
{
	int m=3,a,b,c,d,A;
	for (;m>0;m--)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		A=a+b+c+d;
		if (A==4) printf("E\n");
		else if (A==3) printf("A\n");
		else if (A==2) printf("B\n");
		else if (A==1) printf("C\n");
		else printf("D\n");
	}
	
	
	
	return 0;
}