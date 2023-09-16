#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,max=1;
		scanf("%d %d",&a,&b);
		for (int i=1;i<=b;i++){
			max*=a;
			max%=10;
			if (max==0) max=10;
		}
		if (max==0) printf("10");
		else printf("%d\n",max);
	}	
	return 0;
}