#include <stdio.h>
int main(){
	int n,max=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		int t,bt;
		scanf("%d %d",&t,&bt);
		if (bt>=t && max<bt) max=bt; 
	}
	if (max!=0) printf("%d",max);
	else printf("-1");
	return 0;
}