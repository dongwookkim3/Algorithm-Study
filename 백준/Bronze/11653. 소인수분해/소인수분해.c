#include <stdio.h>
int main(){
	int n,i=2;
	scanf("%d",&n);
	while (1){
		if (n%i==0){
			while (n%i==0){
				printf("%d\n",i);
				n/=i;
			}
		}
		else i++;
		if (n==1) return 0;
	}
}