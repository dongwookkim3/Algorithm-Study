#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int H1,H2,M1,M2,S1,S2;
    scanf("%d:%d:%d %d:%d:%d",&H1,&M1,&S1,&H2,&M2,&S2);
    if (H1==H2 && M1==M2 && S1==S2) cout << "24:00:00";
    else printf("%02d:%02d:%02d",((H2-H1)*3600+(M2-M1)*60+S2-S1+86400)%86400/3600,((H2-H1)*3600+(M2-M1)*60+S2-S1+86400)%3600/60,((H2-H1)*3600+(M2-M1)*60+S2-S1+86400)%60);
    return 0;
}