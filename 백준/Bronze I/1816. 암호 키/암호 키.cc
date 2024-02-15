#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        for (int i=2;i<=1000000;i++){
            if (n%i==0){
                cout << "NO\n";
                break;
            }
            else if (i==1000000){
                cout << "YES\n";
            }
        }
    }
    return 0;
}