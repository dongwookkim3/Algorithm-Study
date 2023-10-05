#include <stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for (int i=1;i<=n;i++){
		int a,b=0;
		scanf("%d",&a);
		while(a>0){
			printf("%d",a%10);
			a-=a%10;
			a/=10;
			b++;
		}
		while(m!=b){
			b++;
			printf("0");
		}
		printf("\n");
	}
	return 0;
}