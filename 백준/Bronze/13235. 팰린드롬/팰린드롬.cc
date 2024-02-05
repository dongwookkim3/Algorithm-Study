#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string A,B;
    cin >> A;
    B=A;
    reverse(B.begin(),B.end());
    if (A==B){
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}