#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> A;
        int n,m;
        cin >> n >> m;
        while(m--){
            int a,b;
            cin >> a >> b;
            A.push_back(a*b);
        }
        sort(A.begin(),A.end(),greater<int>());
        if (n<=A.front()){
            cout << "1\n";
            continue;
        }
        for (int i=1;i<A.size();i++){
            A[i]+=A[i-1];
            if (n<=A[i]){
                cout << i+1 << "\n";
                break;
            }
        }
    }
    return 0;
}