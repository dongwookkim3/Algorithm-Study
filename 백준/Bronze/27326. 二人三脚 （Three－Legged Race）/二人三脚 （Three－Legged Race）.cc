#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    for (int i=1;i<=(n-1)*2;i++){
        int a;
        cin >> a;
        m^=a;
    }
    cout << m;
    return 0;
}