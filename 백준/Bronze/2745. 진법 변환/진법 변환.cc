#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string A;
    long long n,m=0;
    cin >> A >> n;
    for (int i=0;i<A.length();i++){
        if (A[i]>=65) m+=(A[i]-55)*pow(n,A.length()-i-1);
        else m+=(A[i]-48)*pow(n,A.length()-i-1);
    }
    cout << m;
    return 0;
}