#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string A;
    while(getline(cin,A) && A!="END"){
        string B=A;
        sort(B.begin(),B.end());
        for (int i=1;i<B.length();i++){
            if (B[i-1]==B[i] && B[i]!=' '){
                break;
            }
            else if (i==B.length()-1){
                cout << A << "\n";
            }
        }
    }
    return 0;
}