#include <stdio.h>
int main(){
	int T,a,b;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&a,&b);
		if (a<b) printf("NO BRAINS\n");
		else printf("MMM BRAINS\n");
	}
	return 0;
}