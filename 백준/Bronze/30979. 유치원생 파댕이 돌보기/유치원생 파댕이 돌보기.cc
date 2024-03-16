#include <iostream>
using namespace std;
int main(){
    int n,m,s=0;
    cin >> n >> m;
    while(m--){
        int a;
        cin >> a;
        s+=a;
    }
    if (n>s) cout << "Padaeng_i Cry";
    else cout << "Padaeng_i Happy";
    return 0;
}