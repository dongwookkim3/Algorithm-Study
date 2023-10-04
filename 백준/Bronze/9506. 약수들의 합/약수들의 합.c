#include <stdio.h>
#include <math.h>
int main(){
	while(1){
		int a,max=0;
		scanf("%d",&a);
		if (a==-1) return 0;
		for (int i=2;i<=sqrt(a);i++){
			if (a%i==0){
				max+=i+a/i;
				if (i*i==a) max-=i;
			}
		}
		if (max+1==a) {
			printf("%d = 1 ");
		}
		else{
			printf("%d is NOT perfect.\n",a);
			continue;
		}
		for (int i=2;i<a;i++){
			if (a%i==0) printf("+ %d ",i);
		}
		printf("\n");
	}
}