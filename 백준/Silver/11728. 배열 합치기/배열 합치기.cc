#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> A;
    int n,m;
    cin >> n >> m;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    while(m--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end());
    for (int i=0;i<A.size();i++){
        cout << A[i] << ' ';
    }
    return 0;
}