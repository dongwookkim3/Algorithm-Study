#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        int a;
        cin >> a;
        m+=a;
    }
    cout << min(n-m,m);
    return 0;
}