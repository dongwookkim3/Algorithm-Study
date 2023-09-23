#include <stdio.h>
int main(){
	int n,max=0,b,w;
	char A[300001]={};
	scanf("%d %d %d",&n,&b,&w);
	scanf("%s",&A[1]);
	for (int i=1;i<=n;i++){
		int b1=0,w1=0;
		for (int j=i;j<=n;j++){
			if (A[j]=='B') b1++;
			else w1++;
			if (b1>b) break;
			else if (w1+b1>max && w1>=w) max=w1+b1;
		}
	}
	printf("%d",max);
	return 0;
}