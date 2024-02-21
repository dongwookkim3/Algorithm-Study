#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    while(n--){
        int A,B,C;
        cin >> A >> B >> C;
        m+=max(0,(B-A)*C);
    }
    cout << m;
    return 0;
}