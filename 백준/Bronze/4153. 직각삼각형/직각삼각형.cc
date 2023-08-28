#include <stdio.h>
int main(){
	long long int a,b,c,t;
	while(1){
		scanf("%lld %lld %lld",&a,&b,&c);
		if (a==0&&b==0&&c==0) break;
		if (c<a||c<b){
			if (a>=b){
				t=a;
				a=c;
				c=t;
			}
			else{
				t=b;
				b=c;
				c=t;
			}
		}
		if (a*a+b*b==c*c) printf("right\n");
		else printf("wrong\n");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}