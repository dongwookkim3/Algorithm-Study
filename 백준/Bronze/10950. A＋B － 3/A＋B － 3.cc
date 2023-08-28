#include <stdio.h>
 
int main(void){
    int T;
    scanf("%d", &T);
 	int i=0;
    for(; i<T; i++)
	{
        int A, B;
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }
}