#include <stdio.h>
int main(){
	char a[101];
    int N,i,j,s;
    scanf("%d",&N);
    while(N--){
    	scanf("%s",a);
    	for (i=0,j=0,s=0;a[i]!='\0';i++){
    		if (a[i]=='O') j+=1;
    		else j=0;
    		s+=j;
		}
    	printf("%d\n",s);
	}
    return 0;
}