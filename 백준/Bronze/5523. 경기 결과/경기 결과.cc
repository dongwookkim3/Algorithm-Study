#include <stdio.h>
int main(){
	int A,a,b,ap=0,bp=0;
	scanf("%d",&A);
	while(A--){
		scanf("%d %d",&a,&b);
		if (a>b) ap++;
		else if (b>a) bp++;
	}
	printf("%d %d",ap,bp);
	return 0;
}