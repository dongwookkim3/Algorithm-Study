#include <iostream>
#include <cmath>
using namespace std;
int f(string A){
    int m=0;
    for (int i=0;i<A.length();i++){
        m+=(A[i]-65)*pow(26,A.length()-i-1);
    }
    return m;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string A;
        cin >> A;
        if (abs(f(A.substr(0,3))-stoi(A.substr(4,4)))<=100){
            cout << "nice\n";
        }
        else {
            cout << "not nice\n";
        }
    }
    return 0;
}