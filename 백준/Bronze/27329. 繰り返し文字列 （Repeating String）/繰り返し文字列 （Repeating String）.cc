#include <iostream>
using namespace std;
int main(){
    int n;
    string A;
    cin >> n >> A;
    if (A.substr(0,n/2)==A.substr(n/2,n/2)){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}