#include <iostream>
using namespace std;
int main(){
    int A,B,n,m=0;
    cin >> A >> B >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        m+=max(A*a,B*b);
    }
    cout << m;
    return 0;
}