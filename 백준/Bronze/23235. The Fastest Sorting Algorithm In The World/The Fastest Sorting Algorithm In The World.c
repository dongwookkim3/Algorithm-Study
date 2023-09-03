#include <stdio.h>
int main(){
	int n,A;
	for (int j=1;;j++){
		scanf("%d",&n);
		if (n==0) break;
		for (int i=1;i<=n;i++){
			scanf("%d",&A);
		}
		printf("Case %d: Sorting... done!\n",j);
	}
	return 0;
}