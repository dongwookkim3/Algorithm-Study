#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
    	int A[4]={},m=0;
    	for (int i=1;i<=3;i++){
    		scanf("%d",&A[i]);
    		printf("%d ",A[i]);
    		if (A[i]>=10) m++;
		}
		printf("\n");
    	if (m==0) printf("zilch\n\n");
    	else if (m==1) printf("double\n\n");
    	else if (m==2) printf("double-double\n\n");
    	else if (m==3) printf("triple-double\n\n");
	}
    return 0;
}