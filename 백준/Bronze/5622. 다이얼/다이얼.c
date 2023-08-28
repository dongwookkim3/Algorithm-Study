#include <stdio.h>
int main(){
	int i,v=0;
	char a[30];
	scanf("%s",a);
	for (i=0;a[i]!='\0';i++){
		if (a[i]=='A'||a[i]=='B'||a[i]=='C') v+=3;
		else if (a[i]=='D'||a[i]=='E'||a[i]=='F') v+=4;
		else if (a[i]=='G'||a[i]=='H'||a[i]=='I') v+=5;
		else if (a[i]=='J'||a[i]=='K'||a[i]=='L') v+=6;
		else if (a[i]=='M'||a[i]=='N'||a[i]=='O') v+=7;
		else if (a[i]=='P'||a[i]=='Q'||a[i]=='R'||a[i]=='S') v+=8;
		else if (a[i]=='T'||a[i]=='U'||a[i]=='V') v+=9;
		else if (a[i]=='W'||a[i]=='X'||a[i]=='Y'||a[i]=='Z') v+=10;
	}
	printf("%d",v);
	
	
	
	
	
	
	
	return 0;
}