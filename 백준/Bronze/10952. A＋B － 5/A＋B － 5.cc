#include <stdio.h>
int main()
{
    int A, B;
    while(scanf("%d %d", &A, &B) != EOF)
    {
    	if (A == 0 && B == 0)
		{
			break;
		}
        printf("%d\n", A+B);
        
    }
    return 0;
}