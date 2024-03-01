#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        cin >> n >> c;
        while(n--){
            string A;
            cin >> A;
            if (c=='C'){
                cout << A.front()-64 << ' ';
            }
            else {
                cout << char(stoi(A)+64) << ' ';
            }
        }
        cout << "\n";
    }
    return 0;
}