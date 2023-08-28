#include <stdio.h>
int main()
{
    int A, B;
    int T;
    int i;
    scanf("%d",&T);
    for (;i<T;i++)
    {
    while(scanf("%d,%d", &A, &B) != EOF)
    {
        printf("%d\n", A+B);
        
    }
	}
    return 0;
}