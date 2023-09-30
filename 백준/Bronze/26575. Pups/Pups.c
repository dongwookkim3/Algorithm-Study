#include <stdio.h>
int main(){
	int t;
	double a,b,c;
	scanf("%d",&t);
	for (int i=1;i<=t;i++){
		scanf("%lf %lf %lf",&a,&b,&c);
		printf("$%.2lf\n",a*b*c);
	}
	return 0;
}