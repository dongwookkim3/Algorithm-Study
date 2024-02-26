#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    string A;
    cin >> n >> A;
    for (int i=0;i<=A.length()-4;i++){
        if (A.substr(i,4)=="pPAp"){
            m++;
            i+=3;
        }
    }
    cout << m;
    return 0;
}