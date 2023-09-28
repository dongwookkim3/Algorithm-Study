#include <stdio.h>
int gcd(int a,int b){
	if (b==0) return a;
	else gcd(b,a%b);
}
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d\n",a*b/gcd(a,b));
	}
	return 0;
}