#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int y,m,d,n;
    scanf("%d-%d-%d",&y,&m,&d);
    cin >> n;
    while(n--){
        d++;
        if (d==31){
            d=1;
            m++;
            if (m==13){
                m=1;
                y++;
            }
        }
    }
    printf("%d-%02d-%02d",y,m,d);
    return 0;
}