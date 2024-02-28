#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        int n,m=0;
        string A;
        cin >> n >> A;
        int s=A.front()-48;
        for (int j=1;j<=n;j++){
            if (s>=j){
                s+=A[j]-48;
            }
            else {
                m+=j-s;
                s+=A[j]-48+j-s;
            }
        }
        cout << "Case #" << i << ": " << m << "\n";
    }
    return 0;
}