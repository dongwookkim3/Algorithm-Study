#include <iostream>
using namespace std;
int main(){
    long long n,m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            int a;
            cin >> a;
            m+=a;
        }
    }
    cout << m;
    return 0;
}