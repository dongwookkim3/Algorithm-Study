#include <stdio.h>
int main(){
	int a[31]={},i=28,b;
	while(i--){
		scanf("%d",&b);
		a[b]=1;
	}
	for (int j=1;j<=30;j++){
		if (a[j]!=1) printf("%d\n",j);
	}
	return 0;
}