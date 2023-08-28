#include <stdio.h>
#include <string.h>
int main(){
	int a1,a2,a3,b1,b2,b3,A,B;
	scanf("%1d%1d%1d %1d%1d%1d",&a1,&a2,&a3,&b1,&b2,&b3);
	A=a3*100+a2*10+a1;
	B=b3*100+b2*10+b1;
	if (A>=B) printf("%d",A);
	else printf("%d",B);
	return 0;
}