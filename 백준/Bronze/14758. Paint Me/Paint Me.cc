#include <iostream>
using namespace std;
int main(){
    int n,a,b,h,p,m;
    while(cin >> n >> a >> b >> h >> p >> m && (n!=0 || a!=0 || b!=0 || h!=0 || p!=0 || m!=0)){
        int P=a*b+(a+b)*2*h;
        while(m--){
            int A,B;
            cin >> A >> B;
            P-=A*B;
        }
        cout << P*n/p+bool((P*n)%p) << "\n";
    }
    return 0;
}