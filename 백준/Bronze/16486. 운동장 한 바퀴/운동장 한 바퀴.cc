#include <stdio.h>
int main()
{
    int d1, d2;
    float pi = 3.141592;
    scanf("%d %d", &d1, &d2);
    printf("%f", (float)d1*2 + 2*pi*(float)d2);
    return 0;
}