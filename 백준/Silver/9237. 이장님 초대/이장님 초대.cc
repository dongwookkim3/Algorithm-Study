#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A;
    int n,m=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end(),greater<int>());
    for (int i=0;i<A.size();i++){
        if (m<A[i]+i+2){
            m=A[i]+i+2;
        }
    }
    cout << m;
    return 0;
}