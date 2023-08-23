#include <stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int mul5=N/5;
	int mul25=N/25;
	int mul125=N/125;
	printf("%d",mul5+mul25+mul125);
	return 0;
}