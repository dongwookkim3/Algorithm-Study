#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << fixed;
    cout.precision(2);
    while(n--){
        long double a,b;
        cin >> a;
        cout << '$' << (a*4)/5 << "\n";
    }
    return 0;
}