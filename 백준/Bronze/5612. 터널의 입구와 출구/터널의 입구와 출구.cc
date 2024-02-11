#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int max=m;
    while(n--){
        int a,b;
        cin >> a >> b;
        m+=a-b;
        if (m<0){
            cout << 0;
            return 0;
        }
        if (m>max) max=m;
    }
    cout << max;
    return 0;
}