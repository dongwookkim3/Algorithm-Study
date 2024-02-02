#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    if (B.length()>A.length()){
        string T=A;
        A=B;
        B=T;
    }
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    for (int i=0;i<B.length();i++){
        A[i]+=B[i]-'0';
    }
    for (int i=0;i<A.length();i++){
        if (A[i]>57){
            if (i==A.length()-1){
                A[i]-=10;
                A.push_back('1');
            }
            else {
                A[i]-=10;
                A[i+1]++;
            }
        }
    }
    reverse(A.begin(),A.end());
    cout << A;
    return 0;
}