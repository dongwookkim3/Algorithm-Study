#include <stdio.h>
int main()
{
	char a[11];
	int b,c;
	for (;;)
	{
		scanf("%s %d %d",&a,&b,&c);
		if (b==0&&c==0) break;
		if (b>17||c>=80) printf("%s Senior\n",a);
		else  printf("%s Junior\n",a);
		
		
		
	}
	
	
	return 0;
}