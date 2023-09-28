#include <stdio.h>
int main(){
	long int n,max=0,maxi;
	scanf("%ld",&n);
	for (int i=1;;i++){
		max+=i;
		if (n<max){
			maxi=i-1;
			break;
		}
	}
	printf("%d",maxi);
	return 0;
}