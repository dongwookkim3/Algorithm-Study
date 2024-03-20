#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> A;
    int n,m=0,s=1;
    string B;
    cin >> n >> B;
    for (int i=1;i<=B.length();i++){
        if (B[i-1]==B[i]){
            s++;
        }
        else {
            A.push_back(s);
            s=1;
        }
    }
    for (int i=1;i<A.size();i++){
        m=max(m,min(A[i-1],A[i]));
    }
    cout << m*2;
    return 0;
}