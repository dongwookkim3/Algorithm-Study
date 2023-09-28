#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while (n--){
		float A;
		char b[10]={};
		scanf("%f",&A);
		gets(b);
		for (int i=0;b[i]!='\0';i++){
			if (b[i]=='@') A*=3;
			else if (b[i]=='%') A+=5;
			else if (b[i]=='#') A-=7;
		}
		printf("%.2f\n",A);
	}
	return 0;
}