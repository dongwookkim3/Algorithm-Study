#include <stdio.h>

int main(void) {
    int tmp, i;
    int sum = 0;
    for (i = 0; i < 6; i++) {
        scanf("%d", &tmp);
        sum += tmp;
    }
    printf("%d", sum*5);
    return 0;
}