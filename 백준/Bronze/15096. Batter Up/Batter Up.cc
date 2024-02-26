#include <iostream>
using namespace std;
int main(){
    int n,m=0,s=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        if (a!=-1){
            m+=a;
            s++;
        }
    }
    cout << fixed;
    cout.precision(3);
    cout << (float)m/s;
    return 0;
}