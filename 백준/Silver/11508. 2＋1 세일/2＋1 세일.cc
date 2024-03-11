#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long long n,m=0;
    cin >> n;
    vector<int> A(n);
    while(n--){
        cin >> A[n];
    }
    sort(A.begin(),A.end(),greater<int>());
    for (int i=0;i<A.size();i++){
        if ((i+1)%3!=0){
            m+=A[i];
        }
    }
    cout << m;
    return 0;
}