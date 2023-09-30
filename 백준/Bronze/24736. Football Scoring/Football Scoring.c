#include <stdio.h>
int main(){
	for (int i=1;i<=2;i++){
		int t,f,s,p,c;
		scanf("%d %d %d %d %d",&t,&f,&s,&p,&c);
		printf("%d ",t*6+f*3+s*2+p+c*2);
	}
	return 0;
}