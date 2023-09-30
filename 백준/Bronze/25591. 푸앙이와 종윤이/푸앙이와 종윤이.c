#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d %d %d %d %d\n",100-a,100-b,-100+a+b,(100-a)*(100-b),(100-a)*(100-b)/100,(100-a)*(100-b)%100);
    printf("%d %d",-100+a+b+(100-a)*(100-b)/100,(100-a)*(100-b)%100);
	return 0;
}