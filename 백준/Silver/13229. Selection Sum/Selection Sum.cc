#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> A(n+1);
    for (int i=1;i<=n;i++){
        cin >> A[i];
        A[i]+=A[i-1];
    }
    int m;
    cin >> m;
    while(m--){
        int a,b;
        cin >> a >> b;
        cout << A[b+1]-A[a] << "\n";
    }
    return 0;
}