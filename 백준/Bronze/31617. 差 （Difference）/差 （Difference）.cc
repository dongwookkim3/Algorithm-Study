#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m,r,s=0;
    cin >> r >> n;
    vector<int> A(n);
    while(n--){
        cin >> A[n];
    }
    cin >> m;
    vector<int> B(m);
    while(m--){
        cin >> B[m];
    }
    for (int i=0;i<A.size();i++){
        for (int j=0;j<B.size();j++){
            if (A[i]+r==B[j]){
                s++;
            }
        }
    }
    cout << s;
    return 0;
}