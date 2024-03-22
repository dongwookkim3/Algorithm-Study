#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<long long> A(n+1);
        for (int i=1;i<=n;i++){
            cin >> A[i];
            A[i]+=A[i-1];
        }
        while(m--){
            int a,b;
            cin >> a >> b;
            cout << A[b+1]-A[a] << "\n";
        }
        cout << "\n";
    }
    return 0;
}