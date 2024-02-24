#include <iostream>
using namespace std;
int main(){
    string A;
    int m=0;
    cin >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]=='0'){
            cout << m << ' ';
            m=0;
        }
        else if (A[i]=='@'){
            m++;
        }
    }
    cout << m;
    return 0;
}