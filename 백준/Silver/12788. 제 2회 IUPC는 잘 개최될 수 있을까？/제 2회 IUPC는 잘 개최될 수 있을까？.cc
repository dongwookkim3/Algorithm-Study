#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m,k,s=0;
    cin >> n >> m >> k;
    vector<int> A(n);
    m*=k;
    while(n--){
        cin >> A[n];
    }
    sort(A.begin(),A.end());
    while(m>0){
        if (A.empty()){
            cout << "STRESS";
            return 0;
        }
        m-=A.back();
        A.pop_back();
        s++;
    }
    cout << s;
    return 0;
}