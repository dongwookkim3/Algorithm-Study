#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		int a,m=0;
		scanf("%d",&a);
		printf("Pairs for %d:",a);
		for (int j=1;j<=a;j++){
			for (int k=j;k<=a;k++){
				if (j==k) continue;
				else if (j+k==a){
					if (m>=1) printf(",");
					printf(" %d %d",j,k);
					m++;
					break;
				}
			}
		}
		printf("\n");
	}
	return 0;
}