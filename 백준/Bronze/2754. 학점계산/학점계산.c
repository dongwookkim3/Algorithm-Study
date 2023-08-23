#include <stdio.h>
int main(){
	char a,b;
	scanf("%c%c",&a,&b);
	if (a=='A'){
		if (b=='+') printf("4.3");
		else if (b=='0') printf("4.0");
		else printf("3.7");
	}
	else if (a=='B'){
		if (b=='+') printf("3.3");
		else if (b=='0') printf("3.0");
		else printf("2.7");
	}
	else if (a=='C'){
		if (b=='+') printf("2.3");
		else if (b=='0') printf("2.0");
		else printf("1.7");
	}
	else if (a=='D'){
		if (b=='+') printf("1.3");
		else if (b=='0') printf("1.0");
		else printf("0.7");
	}
	else printf("0.0");
	return 0;
}