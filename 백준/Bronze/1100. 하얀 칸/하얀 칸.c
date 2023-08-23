#include <stdio.h>
int main(){
	char A[8][8]={};
	int T=0;
	for (int i=0;i<=7;i++){
		for (int j=0;j<=8;j++){
			scanf("%c",&A[i][j]);
		}
	}
	for (int i=0;i<=7;i++){
		for (int j=0;j<=7;j++){
			if (A[i][j]=='F'&&(i+j)%2==0) T++;
		}
	}
	printf("%d",T);
	return 0;
}