#include <stdio.h>
int main(){
	char A[100][100]={};
	int n,i,j;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%s",&A[i][1]);
	}
	for (i=1;A[1][i]!='\0';i++){
		int b=1;
		for (j=1;j<=n;j++){
			if (A[j][i]==A[j+1][i]){
				b++;
			}
		}
		if (b==n) printf("%c",A[1][i]);
		else printf("?");
	}
	return 0;
}