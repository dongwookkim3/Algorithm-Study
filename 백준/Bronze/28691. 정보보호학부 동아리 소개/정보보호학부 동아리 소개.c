#include <stdio.h>
int main(){
	char A;
	scanf("%c",&A);
	if (A=='M') printf("MatKor");
	else if (A=='W') printf("WiCys");
	else if (A=='C') printf("CyKor");
	else if (A=='A') printf("AlKor");
	else if (A=='$') printf("$clear");
	return 0;
}