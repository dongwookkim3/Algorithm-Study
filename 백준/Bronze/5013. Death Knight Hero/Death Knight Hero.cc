#include <iostream>
using namespace std;
int main(){
    int t,m=0;
    cin >> t;
    while(t--){
        string A;
        cin >> A;
        for (int i=0;i<A.length();i++){
            if (A.substr(i,2)=="CD"){
                break;
            }
            else if (i==A.length()-1){
                m++;
            }
        }
    }
    cout << m;
    return 0;
}