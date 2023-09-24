#include <stdio.h>
int main(){
	int n=9,A[101]={},q,max=0;
	while (n--){
		scanf("%d",&q);
		A[q]++;
		max+=q;
	}
	for (int i=1;i<=100;i++){
		for (int j=i;j<=100;j++){
			if (i==j) continue;
			if (A[i]!=0 && A[j]!=0){
				if (max-i-j==100){
					A[i]=0;
					A[j]=0;
					for (int k=1;k<=100;k++){
						if (A[k]!=0){
							printf("%d\n",k);
						}
					}
					return 0;
				}
			}
		}
	}
}