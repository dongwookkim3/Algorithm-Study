#include <stdio.h>
int main(){
	int a,b;
	while(1){
		scanf("%d",&a);
		if (a==0) break;
		b=0;
		for (int i=1;i<=a;i++){
			b+=i;
		}
		printf("%d\n",b);
	}
    return 0;
}