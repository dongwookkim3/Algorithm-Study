#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
bool Prime(unsigned long long n){
    if (n==0 || n==1){
        return false;
    }
    for (long long i=2;i<=(unsigned long long)sqrt(n);i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    string A;
    cin >> A;
    if (!Prime(stoull(A)) || find(A.begin(),A.end(),'3')!=A.end() || find(A.begin(),A.end(),'4')!=A.end() || find(A.begin(),A.end(),'7')!=A.end()){
        cout << "no";
        return 0;
    }
    reverse(A.begin(),A.end());
    for (int i=0;i<A.length();i++){
        if (A[i]=='6') A[i]='9';
        else if (A[i]=='9') A[i]='6';
    }
    if (Prime(stoull(A))){
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return 0;
}