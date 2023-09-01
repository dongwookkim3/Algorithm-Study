#include <stdio.h>
#include <math.h>
int main(){
	double M,P,a,b;
	scanf("%lf %lf",&a,&b);
	M=(b-a)/400;
	printf("%lf",1/(1+pow(10,M)));
	return 0;
}