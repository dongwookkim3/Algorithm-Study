#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if (2>=b) printf("NEWBIE!");
	else if (a>=b) printf("OLDBIE!");
	else printf("TLE!");
	
	
	
	return 0;
}