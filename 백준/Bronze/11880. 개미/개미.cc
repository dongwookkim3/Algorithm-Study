#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long A,B,C;
        cin >> A >> B >> C;
        cout << min({(A+B)*(A+B)+C*C,(B+C)*(B+C)+A*A,(C+A)*(C+A)+B*B}) << "\n";
    }
    return 0;
}