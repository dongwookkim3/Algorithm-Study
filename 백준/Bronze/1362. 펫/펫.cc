#include <iostream>
using namespace std;
int main(){
    int A,B,C=0;
    while(cin >> A >> B && (A || B) && ++C){
        char c;
        int n;
        bool f=false;
        while(cin >> c >> n && c!='#'){
            if (c=='E'){
                B-=n;
            }
            else {
                B+=n;
            }
            if (B<=0){
                f=true;
            }
        }
        if (f) cout << C << " RIP\n";
        else if (B*2>A && B<A*2){
            cout << C << " :-)\n";
        }
        else {
            cout << C << " :-(\n";
        }
    }
    return 0;
}