#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    string A;
    cin >> n >> A;
    for (int i=0;i<A.length();i++){
        if (i%2 && A[i]!='O'){
            m++;
        }
        else if (i%2==0 && A[i]!='I'){
            m++;
        }
    }
    cout << m;
    return 0;
}