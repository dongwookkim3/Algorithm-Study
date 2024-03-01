#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> A(m);
    while(n--){
        int a;
        cin >> a;
        A[a-1]++;
    }
    cout << *max_element(A.begin(),A.end());
    return 0;
}