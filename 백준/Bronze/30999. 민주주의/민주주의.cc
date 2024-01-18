#include <iostream>
using namespace std;
int main(void){
    int n,m,s=0;
    cin >> n >> m;
    while(n--){
        string A;
        int b=0;
        cin >> A;
        for (int i=0;i<A.length();i++){
            if (A[i]=='O'){
                b++;
            }
        }
        if (b>m/2){
            s++;
        }
    }
    cout << s;
    return 0;
}