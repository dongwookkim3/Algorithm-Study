#include <stdio.h>
int main(){
	float a,b,c,d,e;
	int A;
	scanf("%d",&A);
	while(A--){
		scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
		printf("$%.2f\n",a*350.34+b*230.9+c*190.55+d*125.3+e*180.9);
	}
	return 0;
}