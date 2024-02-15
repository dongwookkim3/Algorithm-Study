#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m=0;
        cin >> n;
        for (int i=1;i<n;i++){
            if (n%i==0){
                m+=i;
            }
        }
        if (n==m) cout << "Perfect\n";
        else if (n>m) cout << "Deficient\n";
        else cout << "Abundant\n";
    }
    return 0;
}