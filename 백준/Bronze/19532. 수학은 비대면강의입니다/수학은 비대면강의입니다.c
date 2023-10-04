#include <stdio.h>
int main(){
	int x1,x2,y1,y2,r1,r2;
	scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
	for (int i=-1000;i<=1000;i++){
		for (int j=-1000;j<=1000;j++){
			if (x1*i+y1*j==r1 && x2*i+y2*j==r2){
				printf("%d %d",i,j);
				return 0;
			}
		}
	}
}