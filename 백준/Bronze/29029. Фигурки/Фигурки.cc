#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a=0,b=0,c=0,d=0,n;
    string A;
    cin >> n >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]=='N') a++;
        else if (A[i]=='S') b++;
        else if (A[i]=='W') c++;
        else if (A[i]=='E') d++;
    }
    cout << n-max({a,b,c,d});
    return 0;
}