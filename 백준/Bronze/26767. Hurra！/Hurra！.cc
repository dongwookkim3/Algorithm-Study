#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        if (i%7==0 && i%11==0) cout << "Wiwat!\n";
        else if (i%11==0) cout << "Super!\n";
        else if (i%7==0) cout << "Hurra!\n";
        else cout << i << "\n";
    }
    return 0;
}