#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(int n, const char* control) {
    for (int i=0;control[i]!='\0';i++){
        if (control[i]=='w') n+=1;
        else if (control[i]=='s') n-=1;
        else if (control[i]=='d') n+=10;
        else if (control[i]=='a') n-=10;
    }
    return n;
}