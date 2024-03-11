#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    vector<int> A(n);
    while(n--){
        cin >> A[n];
    }
    for (int i=1;i<A.size();i++){
        if (A[i]>=A[i-1]){
            m+=A[i]-A[i-1]+1;
            A[i]=A[i-1]-1;
        }
    }
    cout << m;
    return 0;
}