#include <iostream>
#include <string>
using namespace std;
int f(string A){
    int i;
    for (i=0;i<A.length()/2+1;i++){
        if (A[i]!=A[A.length()-i-1]){
            return i*-1-1;
        }
    }
    return i;
}
int main(){
    int n;
    cin >> n;
    while(n--){
        string A;
        cin >> A;
        int m=f(A);
        if (m>0){
            cout << "1 " << m << "\n";
        }
        else {
            cout << "0 " << m*-1 << "\n";
        }
    }
    return 0;
}