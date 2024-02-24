#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    if (n>=6) cout << "Love is open door";
    else {
        for (int i=2;i<=n;i++){
            cout << (i%2==m) << "\n";
        }
    }
    return 0;
}