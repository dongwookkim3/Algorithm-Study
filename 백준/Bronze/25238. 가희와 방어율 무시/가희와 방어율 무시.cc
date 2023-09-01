#include <stdio.h>
int main(){
	double a,b;
	scanf("%lf %lf",&a,&b);
	a-=(a*b/100);
	if (a>=100) printf("0");
	else printf("1");
    return 0;
}