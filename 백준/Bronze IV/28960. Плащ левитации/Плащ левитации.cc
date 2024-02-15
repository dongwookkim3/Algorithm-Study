#include <iostream>
using namespace std;
int main(){
    int h,l,a,b;
    cin >> h >> l >> a >> b;
    if ((l>=a && 2*h>=b) || (l>=b && 2*h>=a)) cout << "YES";
    else cout << "NO";
    return 0;
}