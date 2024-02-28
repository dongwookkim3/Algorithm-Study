#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        int m;
        cin >> m;
        m++;
        while(m--){
            string A=to_string(m);
            string B=A;
            sort(B.begin(),B.end());
            if (A==B){
                cout << "Case #" << i << ": " << A << "\n";
                break;
            }
        }
    }
    return 0;
}