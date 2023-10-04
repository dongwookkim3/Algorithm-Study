#include <stdio.h>
#include <string.h>
int main(){
	long long int a=0;
	char A[10]={};
	for (int i=1;i<=3;i++){
		gets(A);
		if (!strcmp(A,"brown")){
			if (i==1) a+=10;
			else if (i==2) a+=1;
			else a*=10;
		}
		else if (!strcmp(A,"red")){
			if (i==1) a+=20;
			else if (i==2) a+=2;
			else a*=100;
		}
		else if (!strcmp(A,"orange")){
			if (i==1) a+=30;
			else if (i==2) a+=3;
			else a*=1000;
		}
		else if (!strcmp(A,"yellow")){
			if (i==1) a+=40;
			else if (i==2) a+=4;
			else a*=10000;
		}
		else if (!strcmp(A,"green")){
			if (i==1) a+=50;
			else if (i==2) a+=5;
			else a*=100000;
		}
		else if (!strcmp(A,"blue")){
			if (i==1) a+=60;
			else if (i==2) a+=6;
			else a*=1000000;
		}
		else if (!strcmp(A,"violet")){
			if (i==1) a+=70;
			else if (i==2) a+=7;
			else a*=10000000;
		}
		else if (!strcmp(A,"grey")){
			if (i==1) a+=80;
			else if (i==2) a+=8;
			else a*=100000000;
		}
		else if (!strcmp(A,"white")){
			if (i==1) a+=90;
			else if (i==2) a+=9;
			else a*=1000000000;
		}
	}
	printf("%lld",a);
	return 0;
}