#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    for (int i=0;i<A.length();){
        cout << A[i];
        i+=A[i]-64;
    }
    return 0;
}