#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m=0;
        cin >> n;
        m=n;
        while(n!=1){
            if (n%2==0){
                n/=2;
            }
            else {
                n=n*3+1;
            }
            if (n>m){
                m=n;
            }
        }
        cout << m << "\n";
    }
    return 0;
}