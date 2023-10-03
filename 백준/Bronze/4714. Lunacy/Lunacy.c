#include <stdio.h>
int main(){
	while(1){
		float a;
		scanf("%f",&a);
		if (a<0) return 0;
		printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n",a,a*0.167);
	}
}