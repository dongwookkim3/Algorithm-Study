#include <iostream>
#include <vector>
#define MAX 33
using namespace std;
int main(){
    vector<int> A(MAX);
    int n,m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
        if (A[i]!=A[i-1]+1){
            m+=A[i];
        }
    }
    cout << m;
    return 0;
}