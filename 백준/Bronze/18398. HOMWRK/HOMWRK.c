#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for (int i=1;i<=n;i++){
			int a,b;
			scanf("%d %d",&a,&b);
			printf("%d %d\n",a+b,a*b);
		}
	}
	return 0;
}