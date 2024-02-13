#include <iostream>
using namespace std;
int main(){
    char A;
    while(cin >> A && A!='#'){
        int m=0;
        string B;
        getline(cin,B);
        for (int i=0;i<B.length();i++){
            if (A==B[i] || A-32==B[i]){
                m++;
            }
        }
        cout << A << ' ' << m << "\n";
    }
    return 0;
}