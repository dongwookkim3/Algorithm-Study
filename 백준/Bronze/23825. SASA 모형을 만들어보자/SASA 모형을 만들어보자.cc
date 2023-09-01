#include <stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    for (;a>=2&&b>=2;a-=2,b-=2) c+=1;
    printf("%d",c);
    return 0;
}