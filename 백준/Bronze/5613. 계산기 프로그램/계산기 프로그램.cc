#include <iostream>
using namespace std;
int main(){
    int n,m;
    string A;
    cin >> n;
    while(cin >> A && A!="="){
        if (A=="+") m=1;
        else if (A=="-") m=2;
        else if (A=="*") m=3;
        else if (A=="/") m=4;
        else {
            if (m==1) n+=stoi(A);
            else if (m==2) n-=stoi(A);
            else if (m==3) n*=stoi(A);
            else if (m==4) n/=stoi(A);
        }
    }
    cout << n;
    return 0;
}