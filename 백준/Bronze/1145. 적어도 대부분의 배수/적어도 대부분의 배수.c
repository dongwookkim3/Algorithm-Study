#include <stdio.h>
int main(){
	int A[6]={};
	for (int i=1;i<=5;i++){
		scanf("%d",&A[i]);
	}
	for (int i=1;;i++){
		int m=0;
		for (int j=1;j<=5;j++){
			if (i%A[j]==0) m++;
		}
		if (m>=3){
			printf("%d",i);
			return 0;
		}
	}
}