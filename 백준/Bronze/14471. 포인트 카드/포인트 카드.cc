#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    vector<int> A;
    int n,m;
    cin >> n >> m;
    while(m--){
        int a,b;
        cin >> a >> b;
        A.push_back(max(0,n-a));
    }
    cout << accumulate(A.begin(),A.end(),0)-*max_element(A.begin(),A.end());
    return 0;
}