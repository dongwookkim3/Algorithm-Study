#include <iostream>
#define MAX 26
using namespace std;
int main(){
    string A;
    while(cin >> A && A!="#"){
        int m=0;
        for (int i=0;i<A.length()-1;i++){
            if (A[i]-48){
                m++;
            }
        }
        if (A[A.length()-1]=='e'){
            if (m%2==1) A[A.length()-1]='1';
            else A[A.length()-1]='0';
        }
        else {
            if (m%2==1) A[A.length()-1]='0';
            else A[A.length()-1]='1';
        }
        cout << A << "\n";
    }
    return 0;
}