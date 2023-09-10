#include <stdio.h>
int main(){
	while(1){
		float N;
		scanf("%f",&N);
		if (N==0) break;
		float max=1,n=N;
		for (int i=1;i<=4;i++){
			max+=N;
			N*=n;
		}
		printf("%.2f\n",max);
	}
	return 0;
}