#include <iostream>
using namespace std;
int f(int n,int m){
    if (n==m || m==1){
        return 1;
    }
    return f(n-1,m)+f(n-1,m-1);
}
int main(){
    int n;
    cin >> n;
    if (n<4) cout << 0;
    else cout << f(n,4);
    return 0;
}