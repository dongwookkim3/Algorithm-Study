#include <iostream>
using namespace std;
int main(){
    int A=0,B=0,n;
    cin >> n;
    while(n--){
        char s;
        int a,b,c;
        cin >> s >> a >> b >> c;
        if (s=='A'){
            A+=((a/12)*(b/12)*(c/12))*500+1000;
            B+=((a/12)*(b/12)*(c/12))*4000;
        }
        else {
            A+=6000;
        }
    }
    cout << A << "\n" << B;
    return 0;
}