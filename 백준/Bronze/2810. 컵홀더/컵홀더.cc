#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m=1;
    string A;
    cin >> n >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]=='L') i++;
        m++;
    }
    cout << min(n,m);
    return 0;
}