#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        bool A=false,B=false;
        for (int i=1;i<=10;i++){
            int a;
            cin >> a;
            cout << a << ' ';
            if (a==18) A=true;
            else if (a==17) B=true;
        }
        if (A && B) cout << "\nboth\n\n";
        else if (A) cout << "\nmack\n\n";
        else if (B) cout << "\nzack\n\n";
        else cout << "\nnone\n\n";
    }
    return 0;
}