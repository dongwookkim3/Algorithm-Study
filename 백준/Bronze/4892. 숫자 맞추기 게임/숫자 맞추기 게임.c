#include <stdio.h>
int main(){
	for (int i=1;;i++){
		int n;
		scanf("%d",&n);
		if (n==0) return 0;
		printf("%d. ",i);
		n*=3;
		if (n%2==0){
			printf("even ");
			n/=2;
		}
		else {
			printf("odd ");
			n=(n+1)/2;
		}
		n*=3;
		printf("%d\n",n/9);
	}
}