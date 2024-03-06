#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 200000
using namespace std;
int main(){
    vector<vector<int>> A(MAX);
    long long n,max=0,s=0;
    cin >> n;
    for (int i=0;i<n;i++){
        int m;
        cin >> m;
        for (int j=0;j<m;j++){
            int a;
            cin >> a;
            if (a>max){
                max=a;
            }
            A[i].push_back(a);
        }
    }
    for (int i=0;i<n;i++){
        s+=(max-*max_element(A[i].begin(),A[i].end()))*A[i].size();
    }
    cout << s;
    return 0;
}