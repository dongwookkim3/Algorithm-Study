#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> A;
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end());
    for (int i=1;i<A.size();i++){
        if (A[i-1]==A[i]){
            cout << A[i];
            break;
        }
    }
    return 0;
}