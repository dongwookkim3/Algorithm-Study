#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        int a,b,c,d,e,f,g,A,B;
        cin >> a >> b >> c >> d >> e >> f;
        A=a+b*2+c*3+d*3+e*4+f*10;
        cin >> a >> b >> c >> d >> e >> f >> g;
        B=a+b*2+c*2+d*2+e*3+f*5+g*10;
        if (A>B) cout << "Battle " << i << ": Good triumphs over Evil\n";
        else if (A<B) cout << "Battle " << i << ": Evil eradicates all trace of Good\n";
        else cout << "Battle " << i << ": No victor on this battle field\n";
    }
    return 0;
}