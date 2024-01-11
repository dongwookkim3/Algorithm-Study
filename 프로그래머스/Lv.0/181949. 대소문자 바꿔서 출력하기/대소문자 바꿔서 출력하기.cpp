#include <iostream>
using namespace std;
int main(void){
    string s;
    cin >> s;
    for (int i=0;i<s.length();i++){
        if (s[i]>90) cout << (char)(s[i]-32);
        else cout << (char)(s[i]+32);
    }
    return 0;
}