#include <stdio.h>
int main(){
    int A[4]={};
    for (int i=1;i<=3;i++){
    	scanf("%d",&A[i]);
	}
    for (int i=1;i<=3;i++){
    	for (int j=1;j<=3;j++){
    		if (j==i) continue;
    		for (int k=1;k<=3;k++){
    			if (k==i || k==j) continue;
    			if (A[i]+A[j]==A[k]){
    				printf("1");
    				return 0;
				}
				else if (A[i]*A[j]==A[k]){
					printf("2");
					return 0;
				}
			}
		}
	}
	printf("3");
    return 0;
}