#include <iostream>
using namespace std;
int main(){
    int n;
    float m=0;
    cin >> n;
    while(n--){
        float a,b;
        cin >> a >> b;
        m+=a*b;
    }
    cout << fixed;
    cout.precision(3);
    cout << m;
    return 0;
}