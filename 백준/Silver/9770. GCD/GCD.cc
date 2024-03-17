#include <iostream>
#include <vector>
using namespace std;
int GCD(int A,int B){
    if (!B) return A;
    return GCD(B,A%B);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> A;
    int n,m=0;
    while(cin >> n){
        A.push_back(n);
    }
    for (int i=0;i<A.size()-1;i++){
        for (int j=i+1;j<A.size();j++){
            m=max(m,GCD(A[i],A[j]));
        }
    }
    cout << m;
    return 0;
}