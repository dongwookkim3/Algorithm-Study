#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t,s=0;
    cin >> t;
    vector<int> A(t);
    while(t--){
        int n,m=0;
        cin >> n;
        while(n--){
            int a;
            cin >> a;
            m+=a;
        }
        A[t]=m;
    }
    sort(A.begin(),A.end(),greater<int>());
    for (int i=0;i<A.size();i++){
        s+=A[i]*(i+1);
    }
    cout << s;
    return 0;
}