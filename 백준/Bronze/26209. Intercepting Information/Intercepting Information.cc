#include <stdio.h>
int main(){
	int b=0,a;
	for (int i=1;i<=8;i++){
		scanf("%d",&a);
		if (a!=1&&a!=0) b++;
	}
	if (b!=0) printf("F");
	else printf("S");
	return 0;
}