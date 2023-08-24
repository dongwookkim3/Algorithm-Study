#include <stdio.h>
int main(){
    int n;
    while (1){
        scanf("%d",&n);
        if (n==0) break;
        int reversed=0,temp=n;
        while (temp!=0){
            reversed=reversed*10+(temp%10);
            temp/=10;
        }
        if (n==reversed) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}