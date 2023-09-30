#include <stdio.h>
int main(){
    int n,m,A[5]={},max=0;
    scanf("%d\n%d",&n,&m);
    if (n>=5) A[1]=500;
    if (n>=10) A[2]=m/10;
    if (n>=15) A[3]=2000;
    if (n>=20) A[4]=m/4;
    for (int i=1;i<=4;i++){
    	if (max<A[i]) max=A[i];
	}
	if (m<max) printf("0");
	else printf("%d",m-max);
    return 0;
}