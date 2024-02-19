#include <iostream>
using namespace std;
int main(){
    int n,m=0,s=0;
    string A;
    cin >> n >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]=='O'){
            m+=i+1+s;
            s++;
        }
        else {
            s=0;
        }
    }
    cout << m;
    return 0;
}