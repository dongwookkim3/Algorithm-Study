#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << ((n&(-n))==n) << "\n";
    }
    return 0;
}