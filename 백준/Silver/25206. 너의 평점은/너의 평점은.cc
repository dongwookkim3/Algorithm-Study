#include <iostream>
using namespace std;
int main(){
    float A=0,B=0;
    for (int i=1;i<=20;i++){
        string a,b;
        float s;
        cin >> a >> s >> b;
        if (b=="P") continue;
        else if (b=="F"){
            B+=s;
            continue;
        }
        if (b.back()=='0'){
            A+=-s*(b.front()-69);
        }
        else {
            A+=-s*(b.front()-69.5);
        }
        B+=s;
    }
    cout << fixed;
    cout.precision(6);
    if (A) cout << A/B;
    else cout << A;
    return 0;
}