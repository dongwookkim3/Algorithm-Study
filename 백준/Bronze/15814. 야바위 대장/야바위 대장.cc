#include <iostream>
using namespace std;
int main(){
    string A;
    int t;
    cin >> A >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        char B=A[a];
        A[a]=A[b];
        A[b]=B;
    }
    cout << A;
    return 0;
}