#include <iostream>
using namespace std;
int main(){
    int m1=0,m2=0;
    string A;
    cin >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u'){
            m1++;
        }
        else if (A[i]=='y'){
            m2++;
        }
    }
    cout << m1 << ' ' << m1+m2;
    return 0;
}