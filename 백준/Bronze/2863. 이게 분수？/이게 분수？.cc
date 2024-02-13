#include <iostream>
using namespace std;
int main(){
    float a,b,c,d,m=0,mindex;
    cin >> a >> b >> c >> d;
    for (int i=0;i<=3;i++){
        if (a/c+b/d>m){
            m=a/c+b/d;
            mindex=i;
        }
        float t=c;
        c=d;
        d=b;
        b=a;
        a=t;
    }
    cout << mindex;
    return 0;
}