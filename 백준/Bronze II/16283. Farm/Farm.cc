#include <iostream>
using namespace std;
int main(){
    int a,b,n,w;
    cin >> a >> b >> n >> w;
    if (a+b==w && n==2){
        cout << "1 1";
        return 0;
    }
    if (a==b){
        cout << -1;
        return 0;
    }
    for (int i=1;i<n;i++){
        if (a*i+b*(n-i)==w){
            cout << i << ' ' << n-i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}