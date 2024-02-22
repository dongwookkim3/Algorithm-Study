#include <iostream>
using namespace std;
int main(){
    float m,s,g,a,b,l,r;
    cin >> m >> s >> g >> a >> b >> l >> r;
    float A=m/s-l/a,B=m/g-r/b;
    if (A>B) cout << "friskus";
    else cout << "latmask";
    return 0;
}