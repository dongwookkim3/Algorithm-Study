#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin >> n && n!=0){
        int m=0,s=0;
        while(n--){
            int a,b;
            cin >> a >> b;
            m+=b/4;
            s+=b%4/2;
        }
        cout << m+s/2 << "\n";
    }
    return 0;
}