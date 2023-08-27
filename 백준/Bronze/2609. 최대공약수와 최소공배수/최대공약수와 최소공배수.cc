#include <stdio.h>
int main(){
	int A,B,x;
	scanf("%d %d",&A,&B);
	for (int i=1;i<=A&&i<=B;i++){
		if (A%i==0&&B%i==0)
			x=i;	
	}	
	printf("%d\n",x);
	printf("%d",A*B/x);
}