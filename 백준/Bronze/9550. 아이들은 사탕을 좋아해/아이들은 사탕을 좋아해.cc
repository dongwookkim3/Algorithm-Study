#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,m=0;
        cin >> n >> k;
        while(n--){
            int a;
            cin >> a;
            m+=a/k;
        }
        cout << m << "\n";
    }
    return 0;
}