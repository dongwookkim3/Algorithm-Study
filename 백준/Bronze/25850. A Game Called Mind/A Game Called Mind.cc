#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> A(n);
    vector<int> B;
    for (int i=0;i<n;i++){
        int m;
        cin >> m;
        while(m--){
            int a;
            cin >> a;
            A[i].push_back(a);
            B.push_back(a);
        }
        sort(A[i].begin(),A[i].end());
    }
    sort(B.begin(),B.end());
    for (int i=0;i<B.size();i++){
        for (int j=0;j<n;j++){
            if (A[j].front()==B[i]){
                cout << char(65+j);
                A[j].erase(A[j].begin());
                break;
            }
        }
    }
    return 0;
}