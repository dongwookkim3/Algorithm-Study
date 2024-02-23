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
        int a;
        cin >> a;
        A.push_back(a);
    }
    if (accumulate(A.begin(),A.end(),0)-*min_element(A.begin(),A.end())>=n){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}