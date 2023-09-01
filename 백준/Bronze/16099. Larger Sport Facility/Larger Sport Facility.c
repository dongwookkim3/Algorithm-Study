#include <stdio.h>
int main(){
	unsigned long long int n,A,B,a,b,At,Bt;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%llu %llu %llu %llu",&A,&B,&a,&b);
		At=A*B;
		Bt=a*b;
		if (At>Bt) printf("TelecomParisTech\n");
		else if (At==Bt) printf("Tie\n");
		else printf("Eurecom\n");
	}
	return 0;
}