#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        m+=a;
    }
    cout << min(m,n-m);
    return 0;
}