#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin >> n && n!=0){
        int m=0;
        for (int i=1;i<n;i++){
            if (n%i==0){
                m+=i;
            }
        }
        if (n==m) cout << n << " PERFECT\n";
        else if (n>m) cout << n << " DEFICIENT\n";
        else cout << n << " ABUNDANT\n";
    }
    return 0;
}