#include <iostream>
using namespace std;
int main(){
    int a,x,b,y,n;
    cin >> a >> x >> b >> y >> n;
    cout << a+(max((n-30)*x,0))*21 << ' ' << b+(max((n-45)*y,0))*21;
    return 0;
}