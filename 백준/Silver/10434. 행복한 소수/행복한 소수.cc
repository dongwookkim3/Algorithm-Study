#include <iostream>
#include <cmath>
using namespace std;
bool f(int n){
    for (int i=1;i<=100;i++){
        string A=to_string(n);
        int m=0;
        for (int j=0;j<A.length();j++){
            m+=pow(A[j]-48,2);
        }
        if (m==1){
            return true;
        }
        n=m;
    }
    return false;
}
bool Prime(int n){
    if (n==1){
        return false;
    }
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int A,B;
        cin >> A >> B;
        cout << A << ' ' << B;
        if (f(B) && Prime(B)){
            cout << " YES\n";
        }
        else {
            cout << " NO\n";
        }
    }
    return 0;
}