
#include <stdio.h>
 
int main() {
 
    int n,a;
    int sum=0;
    scanf("%d",&n);
 
    for(int i=0; i<9; i++){
        scanf("%d",&a);
        sum+=a;
    }
 
    printf("%d",n-sum);
}