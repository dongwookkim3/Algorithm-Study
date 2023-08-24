#include<stdio.h>
int main(void)
{
    int n, i, cost[20], Y = 0, M = 0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
	{
        scanf("%d", &cost[i]);
        Y += cost[i] / 30 + 1;
        M += cost[i] / 60 + 1;
    }
    Y *= 10;
    M *= 15;
    if(Y == M) printf("Y M %d", Y);
    else if( Y > M) printf("M %d", M);
    else printf("Y %d", Y);
}