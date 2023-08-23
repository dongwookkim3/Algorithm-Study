#include <stdio.h>
int main(){
	int a,b=0,i=5;
	while(i--){
		scanf("%d",&a);
		b+=a;
	}
	printf("%d",b);
	return 0;
}