#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m=0;
        cin >> n;
        while(n--){
            int a,b,c;
            cin >> a >> b >> c;
            m+=max({0,a,b,c});
        }
        cout << m << "\n";
    }
    return 0;
}