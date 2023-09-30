#include <stdio.h>
int main(){
    int n,m,A[31]={},max=0;
    scanf("%d %d",&n,&m);
    for (int i=1;i<=n;i++){
    	scanf("%d",&A[i]);
    	max+=A[i];
	}
	for (int i=1;i<=n;i++){
		printf("%d\n",(m/max)*A[i]);
	}
    return 0;
}