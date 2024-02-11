#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        if (a%b) cout << a/b+1 << "\n";
        else cout << a/b << "\n";
    }
    return 0;
}