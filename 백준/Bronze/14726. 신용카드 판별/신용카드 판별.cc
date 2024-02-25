#include <iostream>
using namespace std;
int f(int n){
    if (n>9) return f(n/10)+n%10;
    else return n;
}
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        string A;
        int m=0;
        cin >> A;
        for (int i=0;i<A.length();i++){
            if (i%2==1){
                m+=A[i]-48;
            }
            else {
                m+=f((A[i]-48)*2);
            }
        }
        if (m%10==0) cout << "T\n";
        else cout << "F\n";
    }
    return 0;
}