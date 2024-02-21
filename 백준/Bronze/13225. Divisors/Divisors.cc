#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m=0;
        cin >> n;
        for (int i=1;i<=n;i++){
            if (n%i==0){
                m++;
            }
        }
        cout << n << ' ' << m << "\n";
    }
    return 0;
}