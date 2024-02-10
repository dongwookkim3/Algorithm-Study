#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for (int i=1;;i++){
            if ((i+1)*i>n){
                cout << i-1 << "\n";
                break;
            }
        }
    }
    return 0;
}