#include <stdio.h>
int main(){
    int a,b,n;
    scanf("%d %d\n%d",&a,&b,&n);
    for (int i=1;i<=n;i++){
    	int A;
    	scanf("%d",&A);
    	if (A<=1000){
    		printf("%d %d\n",A,A*a);
		}
		else {
			printf("%d %d\n",A,(A-1000)*b+1000*a);
		}
	}
    return 0;
}