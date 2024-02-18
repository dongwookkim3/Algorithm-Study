#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int A=0,B=0;
    string s;
    cin >> s;
    for (int i=0;i<s.length();i++){
        if (s[i]=='A') A++;
        else B++;
    }
    cout << A << " : " << B;
    return 0;
}