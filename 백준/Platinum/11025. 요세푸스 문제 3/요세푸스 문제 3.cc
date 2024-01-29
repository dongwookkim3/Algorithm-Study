#include <iostream>
using namespace std;
int main(){
    int n,m,s=0;
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        s=(s+m)%i;
    }
    cout << ++s;
    return 0;
}