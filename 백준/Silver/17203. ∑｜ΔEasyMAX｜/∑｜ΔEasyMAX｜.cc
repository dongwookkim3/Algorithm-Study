#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    vector<int> A(n),B(n);
    for (int i=0;i<n;i++){
        cin >> A[i];
        if (i){
            B[i]=abs(A[i]-A[i-1]);
            B[i]+=B[i-1];
        }
    }
    while(m--){
        int a,b;
        cin >> a >> b;
        cout << B[b-1]-B[a-1] << "\n";
    }
    return 0;
}