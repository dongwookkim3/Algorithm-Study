#include <stdio.h>
int main(){
	char a[256];
	while(1){
		gets(a);
		if (a[0]=='#') break;
        int b=0;
		for (int i=0;a[i]!='\0';i++){
			if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U') b++;
		}
		printf("%d\n",b);
	}
	return 0;
}