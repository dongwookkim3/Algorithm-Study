#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        m+=a*b;
    }
    cout << m;
    return 0;
}