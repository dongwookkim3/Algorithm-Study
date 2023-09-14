#include <stdio.h>
int main(){
	int x,y,A[301][301]={},n;
	scanf("%d %d",&x,&y);
	for (int i=1;i<=x;i++){
		for (int j=1;j<=y;j++){
			scanf("%d",&A[i][j]);
		}
	}
	scanf("%d",&n);
	int a,b,c,d;
	for (int k=1;k<=n;k++){
		int max=0;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		for (int i=a;i<=c;i++){
			for (int j=b;j<=d;j++){
				max+=A[i][j];
			}
		}
		printf("%d\n",max);
	}
	return 0;
}