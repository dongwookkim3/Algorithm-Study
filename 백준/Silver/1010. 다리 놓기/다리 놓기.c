#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,T=1;
		scanf("%d %d",&a,&b);
		for (int i=0;i<a;i++){
			T*=b-i;
			T/=i+1;
		}
		printf("%d\n",T);
	}
	return 0;
}