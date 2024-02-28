#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        vector<pair<int,int>> A;
        int n,m=0;
        cin >> n;
        while(n--){
            int a,b;
            cin >> a >> b;
            A.push_back({a,b});
        }
        for (int j=0;j<A.size();j++){
            for (int k=0;k<A.size();k++){
                if (j==k) continue;
                if (A[j].first<A[k].first && A[j].second>A[k].second){
                    m++;
                }
            }
        }
        cout << "Case #" << i << ": " << m << "\n";
    }
    return 0;
}