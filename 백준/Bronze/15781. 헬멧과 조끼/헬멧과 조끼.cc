#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A,B;
    int n,m,s=0;
    cin >> n >> m;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    while(m--){
        int a;
        cin >> a;
        B.push_back(a);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    cout << A.back()+B.back();
    return 0;
}