#include <stdio.h>
int main(){
	char String[15]="WelcomeToSMUPC";
	int N;
	scanf("%d",&N);
	printf("%c",String[(N-1)%14]);
	return 0;
}