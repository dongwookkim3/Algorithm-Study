#include <iostream>
using namespace std;
int GCD(int A,int B){
    if (!B) return A;
    return GCD(B,A%B);
}
int main(){
    int n,m;
    cin >> n >> m;
    while(--n){
        int a;
        cin >> a;
        cout << m/GCD(m,a) << '/' << a/GCD(m,a) << "\n";
    }
    return 0;
}