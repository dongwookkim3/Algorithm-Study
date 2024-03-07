#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    float m=0;
    cin >> n;
    if (n==0){
        cout << 0;
        return 0;
    }
    vector<int> A(n);
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    sort(A.begin(),A.end());
    for (int i=round((float)n*3/20);i<n-round((float)n*3/20);i++){
        m+=A[i];
    }
    cout << round(m/(A.size()-round((float)n*3/20)*2));
    return 0;
}