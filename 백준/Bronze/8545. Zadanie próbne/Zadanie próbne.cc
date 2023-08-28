#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char a[1000];
	scanf("%s",&a);
	for(i=strlen(a)-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}