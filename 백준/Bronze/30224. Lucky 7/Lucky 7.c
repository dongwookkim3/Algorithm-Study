#include <stdio.h>
int f(int a){
	if (a<1) return 0;
	else if (a%10==7) return 1;
	else f((a-a%10)/10);
}
int main(){
	int n,m=0;
	scanf("%d",&n);
	if (f(n)==1 && n%7==0) printf("3");
	else if (f(n)!=1 && n%7==0) printf("1");
	else if (f(n)==1 && n%7!=0) printf("2");
	else if (f(n)!=1 && n%7!=0) printf("0");
	return 0;
}