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
    vector<int> A(n+1);
    while(n--){
        cin >> A[n+1];
    }
    sort(A.begin(),A.end());
    for (int i=2;i<A.size();i++){
        A[i]+=A[i-1];
    }
    while(m--){
        int L,R;
        cin >> L >> R;
        cout << A[R]-A[L-1] << "\n";
    }
    return 0;
}