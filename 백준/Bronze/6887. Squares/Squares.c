#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;;i++){
		if (i*i>n){
			printf("The largest square has side length %d.",i-1);
			return 0;
		}
	}
}