#include <stdio.h>
int main(){
	int q,x1,x2,y1,y2,A[301][301]={},T=0;
	for (int q=1;q<=4;q++){
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		for (int i=y1;i<y2;i++){
			for (int j=x1;j<x2;j++){
				A[i][j]++;
			}
		}
	}
	for (int i=1;i<=300;i++){
		for (int j=1;j<=300;j++){
			if (A[i][j]!=0) T++;
		}
	}
	printf("%d",T);
	return 0;
}
