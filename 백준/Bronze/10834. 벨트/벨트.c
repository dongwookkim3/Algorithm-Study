#include <stdio.h>
int main(){
	int n,m=0,s=1;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		double a,b,c;
		scanf("%lf %lf %lf",&a,&b,&c);
		m+=c;
		s=(s/a)*b;
	}
	printf("%d %d",m%2,s);
	return 0;
}