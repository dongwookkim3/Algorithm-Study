#include <iostream>
using namespace std;
int main(){
    int n,a=0,b=0;
    string A;
    cin >> n >> A;
    for (int i=0;i<A.length();){
        if (A.substr(i,7)=="bigdata"){
            a++;
            i+=7;
        }
        else {
            b++;
            i+=8;
        }
    }
    if (a==b) cout << "bigdata? security!";
    else if (a>b) cout << "bigdata?";
    else cout << "security!";
    return 0;
}