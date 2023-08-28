#include <stdio.h>
int main()
{
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);
    int max = N / 2 < M ? N / 2 : M;
    K -= N + M - 3 * max;
    if (K > 0)
	{
        K--;
        max -= K / 3 + 1;
    }
    printf("%d\n", max);
    return 0;
}
