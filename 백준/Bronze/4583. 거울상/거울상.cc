#include <iostream>
using namespace std;
int main(){
    string A;
    while(cin >> A && A!="#"){
        string B;
        bool f=false;
        for (int i=A.length()-1;i>=0;i--){
            if (A[i]=='b') B+='d';
            else if (A[i]=='d') B+='b';
            else if (A[i]=='p') B+='q';
            else if (A[i]=='q') B+='p';
            else if (A[i]=='i' || A[i]=='o' || A[i]=='v' || A[i]=='w' || A[i]=='x') B+=A[i];
            else f=true;
        }
        if (f) cout << "INVALID\n";
        else cout << B << "\n";
    }
}