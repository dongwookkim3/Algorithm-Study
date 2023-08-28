#include <stdio.h>
int main()
{
	char a;
	while ((a=getchar())!=EOF)
	{
		putchar(a);
	}
	return 0;
}