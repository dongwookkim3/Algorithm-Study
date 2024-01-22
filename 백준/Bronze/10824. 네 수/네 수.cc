#include <iostream>
using namespace std;
int main(){
    string a,b,c,d;
    cin >> a >> b >> c >> d;
    a+=b;
    c+=d;
    cout << stoll(a)+stoll(c);
    return 0;
}