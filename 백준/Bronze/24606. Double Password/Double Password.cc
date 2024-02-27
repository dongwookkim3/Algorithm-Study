#include <iostream>
using namespace std;
int main(){
    int m=1;
    string A,B;
    cin >> A >> B;
    for (int i=0;i<A.length();i++){
        if (A[i]!=B[i]){
            m*=2;
        }
    }
    cout << m;
    return 0;
}