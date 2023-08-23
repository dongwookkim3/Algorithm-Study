#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    n++;
    while(n--){
        if (n%2==0) answer+=n;
    }
    return answer;
}