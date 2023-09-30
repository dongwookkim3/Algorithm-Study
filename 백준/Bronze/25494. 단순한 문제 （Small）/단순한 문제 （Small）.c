#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while (n--){
    	int a,b,c,t=0;
    	scanf("%d %d %d",&a,&b,&c);
    	for (int i=1;i<=a;i++){
    		for (int j=1;j<=b;j++){
    			for (int k=1;k<=c;k++){
    				if ((i%j)==(j%k) && (j%k)==(k%i)) t++;
				}
			}
		}
		printf("%d\n",t);
	}
	return 0;
}