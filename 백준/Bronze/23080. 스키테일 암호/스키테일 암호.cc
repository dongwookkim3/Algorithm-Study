#include <iostream>
using namespace std;
int main(){
    int n;
    string A;
    cin >> n >> A;
    for (int i=0;i<A.length();i+=n){
        cout << A[i];
    }
    return 0;
}