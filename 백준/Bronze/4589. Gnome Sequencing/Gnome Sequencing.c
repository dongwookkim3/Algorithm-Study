#include <stdio.h>
int main(){
	printf("Gnomes:\n");
	int n;
	scanf("%d",&n);
	while(n--){
		int A[4]={},p=0,m=0;
		for (int i=1;i<=3;i++){
			scanf("%d",&A[i]);
			if (i>=2){
				if (A[i]>A[i-1]) p++;
				else m++;
			}
		}
		if (p==2 || m==2) printf("Ordered\n");
		else printf("Unordered\n");
	}
	return 0;
}