#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    while(m--){
        int a;
        cin >> a;
        if (a%2==0) n-=a/2;
        else n-=a/2+1;
    }
    if (n>0) cout << "NO";
    else cout << "YES";
    return 0;
}