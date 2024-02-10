#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        string A;
        cin >> A;
        if (A[A.length()/2-1]==A[A.length()/2]) cout << "Do-it\n";
        else cout << "Do-it-Not\n";
    }
    return 0;
}