#include <iostream>
using namespace std;
int main(){
    float c,m=0;
    int n;
    cin >> c >> n;
    while(n--){
        float A,B;
        cin >> A >> B;
        m+=A*B*c;
    }
    cout << fixed;
    cout.precision(7);
    cout << m;
    return 0;
}