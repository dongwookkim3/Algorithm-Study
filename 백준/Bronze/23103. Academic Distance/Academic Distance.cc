#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    vector<pair<int,int>> A(n);
    for (int i=0;i<n;i++){
        cin >> A[i].first >> A[i].second;
        if (i!=0){
            m+=abs(A[i].first-A[i-1].first)+abs(A[i].second-A[i-1].second);
        }
    }
    cout << m;
    return 0;
}