#include <stdio.h>
int main(){
	int p=-1,m=0,c=0,A[5]={};
	for (int i=1;i<=4;i++){
		scanf("%d",&A[i]);
		if (A[i]>A[i-1]) p++;
		else if (A[i]<A[i-1]) m++;
		else c++;
	}
	if (p==3) printf("Fish Rising");
	else if (m==3) printf("Fish Diving");
	else if (c==3) printf("Fish At Constant Depth");
	else printf("No Fish");
	return 0;
}