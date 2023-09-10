#include <stdio.h>
int main(){
	long int N,max=0;
	scanf("%ld",&N);
	for (int i=1;i<=N;i++) max+=i;
	printf("%d\n%d\n%d",max,max*max,max*max);
	return 0;
}