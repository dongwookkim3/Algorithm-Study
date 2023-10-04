#include <stdio.h>
int min(int a,int b){
	if (a>=b) return b;
	else return a;
}

int main(){
	int n;
	scanf("%d",&n);
	for (int q=1;q<=n;q++){
		int a,b,c,m=0;
		scanf("%d %d %d",&a,&b,&c);
		printf("%d\n",min(min(a,b),min(b,c)));
	}
	return 0;
}