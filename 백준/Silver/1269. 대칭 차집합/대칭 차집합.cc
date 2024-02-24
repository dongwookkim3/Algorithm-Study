#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> A(n+m);
    for (int i=0;i<n+m;i++){
        cin >> A[i];
    }
    sort(A.begin(),A.end());
    A.erase(unique(A.begin(),A.end()),A.end());
    cout << A.size()*2-n-m;
    return 0;
}