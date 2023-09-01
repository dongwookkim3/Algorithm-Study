#include <stdio.h>
int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		printf("%d\n",b/(a+1));
	}
	return 0;
}