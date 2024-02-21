#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int a=-n;a<=n;a++){
        for (int b=-n-2;b<=n+2;b++){
            if (a==0 || b==0){
                continue;
            }
            int c=n/a;
            int d=(-n-2)/b;
            if (a*c!=n || b*d!=-n-2 || a*d+b*c!=n+1){
                continue;
            }
            else {
                cout << a << ' ' << b << ' ' << c << ' ' << d;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}