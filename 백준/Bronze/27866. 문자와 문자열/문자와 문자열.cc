#include <stdio.h>
int main()
{
	char b[1001];
	int a;
	scanf("%s\n%d",&b,&a);
	printf("%c",b[a-1]);
	
	
	
	return 0;
}