#include <iostream>
using namespace std;
int main(){
    int n,m,s=0,max=0;
    cin >> n >> m;
    while(n--){
        int a,b;
        cin >> a >> b;
        s+=a-b;
        if (s>max){
            max=s;
        }
    }
    if (max>m) cout << max-m;
    else cout << 0;
    return 0;
}