#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        sort(S.begin(),S.end(),greater<int>());
        unsigned long long A=stoull(S.substr(0,S.length()-1)),B=S.back()-48;
        cout << A+B << "\n";
    }
    return 0;
}