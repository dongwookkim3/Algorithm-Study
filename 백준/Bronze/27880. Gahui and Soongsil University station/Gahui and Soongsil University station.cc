#include <iostream>
using namespace std;
int main(){
    string A;
    int n,m=0;
    while(cin >> A >> n){
        if (A=="Stair"){
            m+=17*n;
        }
        else {
            m+=21*n;
        }
    }
    cout << m;
    return 0;
}