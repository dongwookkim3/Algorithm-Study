#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        int n,m;
        cin >> n >> m;
        while(--n){
            int a;
            cin >> a;
            m^=a;
        }
        cout << "Case #" << i << ": " << m << "\n";
    }
    return 0;
}