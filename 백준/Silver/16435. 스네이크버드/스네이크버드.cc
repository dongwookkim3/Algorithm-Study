#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A;
    int n,m;
    cin >> n >> m;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end());
    for (int i=0;i<A.size();i++){
        if (m>=A[i]){
            m++;
        }
        else {
            break;
        }
    }
    cout << m;
    return 0;
}