#include<stdio.h>
int plus(int num);
int main(void)
{
    int n, check, cm;    
    while(scanf("%d", &n) && n != 0)
	{
        cm = 1;
        while(n != 0)
		{
            check = n%10;
            cm += plus(check);
            n/=10;
        }
        printf("%d\n", cm);
    }
}
int plus(int num)
{
    if (num == 0) return 5;
    else if(num == 1) return 3;
    else return 4;
}