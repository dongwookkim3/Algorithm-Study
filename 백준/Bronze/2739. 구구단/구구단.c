#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for (int i=1;i<=9;i++){
		printf("%d * %d = %d\n",a,i,a*i);
	}
	return 0;
}