#include <stdio.h>

int main(void) {
    char s1[21];
    scanf("%s",s1);
    for (int i=0;s1[i]!='\0';i++){
        if (s1[i]>94) printf("%c",s1[i]-32);
        else printf("%c",s1[i]+32);
    }
    return 0;
}
