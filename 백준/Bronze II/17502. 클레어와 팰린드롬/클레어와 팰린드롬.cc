#include <iostream>
using namespace std;
int main(){
    int n;
    string A;
    cin >> n >> A;
    for (int i=0;i<=n/2;i++){
        if (A[i]=='?' && A[A.length()-i-1]=='?'){
            A[i]='a';
            A[A.length()-i-1]='a';
        }
        else if (A[i]=='?'){
            A[i]=A[A.length()-i-1];
        }
        else if (A[A.length()-i-1]=='?'){
            A[A.length()-i-1]=A[i];
        }
    }
    cout << A;
}