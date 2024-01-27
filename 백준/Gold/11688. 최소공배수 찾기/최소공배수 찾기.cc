#include <iostream>
using namespace std;
long long GCD(long long A,long long B){
    if (B==0) return A;
    else return GCD(B,A%B);
}
long long LCM(long long A,long long B){
    return A*B/GCD(A,B);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long A,B,L;
    cin >> A >> B >> L;
    A=LCM(A,B);
    if (L%A==0){
        for (long long i=L/A;;i+=L/A){
            if (LCM(A,i)==L){
                cout << i;
                break;
            }
        }
    }
    else {
        cout << -1;
    }
    return 0;
}