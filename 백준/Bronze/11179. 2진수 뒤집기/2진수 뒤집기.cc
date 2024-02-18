#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    string A;
    long long n,m=0;
    cin >> n;
    for (long long i=pow(2,30);i>=1;i/=2){
        if (n/i){
            A.push_back('1');
            n%=i;
        }
        else if (!A.empty()){
            A.push_back('0');
        }
    }
    reverse(A.begin(),A.end());
    for (int i=0;i<A.length();i++){
        m+=(A[i]-48)*pow(2,A.length()-i-1);
    }
    cout << m;
    return 0;
}