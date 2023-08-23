#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a) {
    if (a==90) return 2;
    else if (a==180) return 4;
    else if (a>90) return 3;
    else return 1;
}