#include <iostream>
#include <cmath>
using namespace std;
long long f(long long n){
    if (n<=3) return n;
    long long m=sqrt((float)n);
    if (m*m==n){
        return 2*m-1;
    }
    else if (n<=m*m+m){
        return 2*m;
    }
    return 2*m+1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        cout << f(b-a) << "\n";
    }
    return 0;
}