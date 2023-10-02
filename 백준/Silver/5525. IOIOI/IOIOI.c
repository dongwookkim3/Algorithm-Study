#include <stdio.h>
int main(){
	int n,m,max=0;
	char A[1000001]={};
	scanf("%d %d",&n,&m);
	scanf("%s",&A[1]);
	for (int i=1;i<=m;i++){
		int a=0,b=0;
		for (int j=i;j<=m;j++){
			if (A[j]=='I') a++;
			else b++;
			if (a==n+1 && b==n){
				max++;
				break;
			}
			else if (A[j]==A[j+1]) break;
		}
	}
	printf("%d",max);
	return 0;
}