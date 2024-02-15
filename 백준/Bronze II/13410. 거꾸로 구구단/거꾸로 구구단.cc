#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A;
    int n,k;
    cin >> n >> k;
    for (int i=1;i<=k;i++){
        string a=to_string(n*i);
        reverse(a.begin(),a.end());
        A.push_back(stoi(a));
    }
    cout << *max_element(A.begin(),A.end());
    return 0;
}