#include <iostream>
using namespace std;
bool f(string A,string B){
    while(A.length()!=B.length()){
        B.erase(B.begin());
    }
    return A==B;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (f(to_string(n),to_string(n*n))){
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}