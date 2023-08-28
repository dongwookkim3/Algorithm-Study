#include <stdio.h>

int main(){
    int i, sh, sm, ss, eh, em, es;
    int start, end, t, h, m, s;
    for(i = 0; i < 3; i++){
        scanf("%d %d %d %d %d %d", &sh, &sm, &ss, &eh, &em, &es);
        start = (sh*3600)+(sm*60)+ss;
        end = (eh*3600)+(em*60)+es;
        t = end - start;
        h = t/3600;
        m = (t%3600)/60;
        s = (t%3600)%60;
        
        printf("%d %d %d\n", h, m, s);
    }
    return 0;
}