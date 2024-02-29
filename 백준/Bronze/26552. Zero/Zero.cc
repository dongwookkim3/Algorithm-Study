#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for (int i=n+1;;i++){
            string A=to_string(i);
            if (A.find('0')!=string::npos){
                continue;
            }
            cout << i << "\n";
            break;
        }
    }
    return 0;
}