#include <stdio.h>
int main (){
	int A,B,C;
	scanf("%d %d %d",&A,&B,&C);
	printf("%d\n",(A+B)%C);
	printf("%d\n",((A%C)+(B%C))%C);
	printf("%d\n",(A*B)%C);
	printf("%d\n",((A%C)*(B%C))%C);
	return 0;
}