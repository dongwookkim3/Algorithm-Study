#include <stdio.h>
int main(){
	int n,m;
	scanf("%d\n%d",&n,&m);
	if (n>=3 && m<=4) printf("TroyMartian\n");
	if (n<=6 && m>=2) printf("VladSaturnian\n");
	if (n<=2 && m<=3) printf("GraemeMercurian\n");
}