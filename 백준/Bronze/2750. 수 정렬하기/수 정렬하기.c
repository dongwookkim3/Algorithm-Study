#include <stdio.h>
int main(){
    int A[2001] = {}, n, a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        A[a + 1000]++;
    }
    for (int i = -1000; i <= 1000; i++) {
        while (A[i + 1000] > 1) {
            printf("%d\n", i);
            A[i + 1000]--;
        }
    }
    for (int i = -1000; i <= 1000; i++) {
        if (A[i + 1000] == 1) {
            printf("%d\n", i);
        }
    }
    return 0;
}
