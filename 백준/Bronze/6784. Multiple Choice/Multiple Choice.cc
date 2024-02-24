#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    vector<string> A(n);
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    for (int i=0;i<n;i++){
        string B;
        cin >> B;
        if (A[i]==B){
            m++;
        }
    }
    cout << m;
    return 0;
}