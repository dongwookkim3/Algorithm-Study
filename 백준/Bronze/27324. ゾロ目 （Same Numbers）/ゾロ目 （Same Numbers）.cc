#include <stdio.h>
int main(){
	int A;
	scanf("%d",&A);
	if (A/10==A%10) printf("1");
	else printf("0");
	return 0;
}