#include <stdio.h>
int main(){
	int n,min=1001;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		int t,bt;
		scanf("%d %d",&t,&bt);
		if (bt>=t && min>bt) min=bt; 
	}
	if (min!=1001) printf("%d",min);
	else printf("-1");
	return 0;
}