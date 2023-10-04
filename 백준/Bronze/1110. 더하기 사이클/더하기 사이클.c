#include <stdio.h>
int f(int a){
	int b=a%10;
	a-=b;
	a/=10;
	return (a+b)%10;
}
int main(){
	int n;
	scanf("%d",&n);
	int N=n;
	for (int i=1;;i++){
		int a=f(n);
		n=n%10;
		n*=10;
		n+=a;
		if (n==N){
			printf("%d",i);
			return 0;
		}
	}
}