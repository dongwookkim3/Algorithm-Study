#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> A;
    int n,k;
    cin >> n >> k;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end());
    cout << A[k-1];
    return 0;
}