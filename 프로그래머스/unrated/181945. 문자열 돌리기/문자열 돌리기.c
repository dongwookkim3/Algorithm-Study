#include <stdio.h>

int main(void) {
    char s1[30];
    scanf("%s", s1);
    for (int i=0;s1[i]!='\0';i++){
        printf("%c\n",s1[i]);
    }
    return 0;
}
