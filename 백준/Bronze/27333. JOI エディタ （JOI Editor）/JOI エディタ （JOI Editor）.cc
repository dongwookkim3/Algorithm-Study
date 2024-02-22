#include <iostream>
using namespace std;
int main(){
    int n;
    string A;
    cin >> n >> A;
    for (int i=0;i<A.length()-1;i++){
        if (A[i]==A[i+1] && A[i]>=97){
            A[i]-=32;
            A[i+1]-=32;
        }
    }
    cout << A;
    return 0;
}