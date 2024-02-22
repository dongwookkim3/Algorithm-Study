#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
void f(int n,string &A){
    if (n/3){
        f(n/3,A);
        A+=to_string(n%3);
    }
    else {
        A+=to_string(n);
    }
}
int solution(int n){
    int m=0;
    string A;
    f(n,A);
    reverse(A.begin(),A.end());
    for (int i=0;i<A.length();i++){
        m+=(A[i]-48)*pow(3,A.length()-i-1);
    }
    return m;
}