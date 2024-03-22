#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> A(n),B(m);
        while(n--){
            cin >> A[n];
        }
        while(m--){
            cin >> B[m];
        }
        sort(A.begin(),A.end(),greater<int>());
        sort(B.begin(),B.end(),greater<int>());
        if (A.front()>=B.front()) cout << "S\n";
        else if (A.front()<B.front()) cout << "B\n";
    }
    return 0;
}