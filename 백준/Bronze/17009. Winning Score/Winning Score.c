#include <stdio.h>
int main(){
	int a=0,b=0;
	for (int i=1;i<=2;i++){
		int x1,x2,x3;
		scanf("%d\n%d\n%d",&x1,&x2,&x3);
		if (i==1) a+=x1*3+x2*2+x3;
		else b+=x1*3+x2*2+x3;
	}
	if (a>b) printf("A");
	else if (b>a) printf("B");
	else printf("T");
	return 0;
}