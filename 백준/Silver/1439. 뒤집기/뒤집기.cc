#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string A;
    int a=0,b=0;
    cin >> A;
    if (A[0]-48){
        a++;
    }
    else {
        b++;
    }
    for (int i=1;i<A.length();i++){
        if (A[i]!=A[i-1]){
            if (A[i]-48){
                a++;
            }
            else {
                b++;
            }
        }
    }
    cout << min(a,b);
    return 0;
}