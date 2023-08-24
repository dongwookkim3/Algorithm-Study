#include <stdio.h>
int main(){
	int Q,A[1000]={},a,b=0;
	scanf("%d",&Q);
	while(Q--){
		scanf("%d",&a);
		A[a]++;
	}
	for (int i=1;i<=100;i++){
		if (A[i]>1) b+=A[i]-1;
	}
	printf("%d",b);
	
	return 0;
}