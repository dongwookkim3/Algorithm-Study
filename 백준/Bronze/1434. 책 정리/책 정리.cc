#include <iostream>
using namespace std;
int main(){
    int n,m,A=0,B=0;
    cin >> n >> m;
    while(n--){
        int a;
        cin >> a;
        A+=a;
    }
    while(m--){
        int a;
        cin >> a;
        B+=a;
    }
    cout << A-B;
    return 0;
}