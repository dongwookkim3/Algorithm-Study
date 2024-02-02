#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c;
    string A;
    cin >> a >> b >> c >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]=='A'){
            cout << min({a,b,c}) << ' ';
        }
        else if (A[i]=='B'){
            cout << a+b+c-min({a,b,c})-max({a,b,c}) << ' ';
        }
        else {
            cout << max({a,b,c}) << ' ';
        }
    }
    return 0;
}