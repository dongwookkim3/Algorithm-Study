#include <iostream>
#include <vector>
#define MAX 50
using namespace std;
int main(){
    vector<int> A(MAX+1,0);
    int n,m;
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        cin >> A[i];
        A[i]+=A[i-1];
    }
    for (int i=1;i<=n;i++){
        if (A[i]>m){
            cout << i-1;
            return 0;
        }
    }
    cout << n;
    return 0;
}