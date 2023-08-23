#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    if (a==b) answer=1;
    else answer=-1;
    return answer;
}