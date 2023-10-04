#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",5*n-400);
	if (5*n-400<100) printf("1");
	else if (5*n-400==100) printf("0");
	else printf("-1");
}