#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    for (int i=1;i<=10000;i++){
        long long m=0;
        for (int j=0;j<A.length();j++){
            m+=(A[j]-48)*(A[j]-48);
        }
        if (m==1){
            cout << "HAPPY";
            return 0;
        }
        A=to_string(m);
    }
    cout << "UNHAPPY";
    return 0;
}