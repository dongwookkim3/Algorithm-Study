#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<string> A,B;
    while(n--){
        string a;
        cin >> a;
        A.push_back(a);
    }
    while(m--){
        string b;
        cin >> b;
        B.push_back(b);
    }
    for (int i=0;i<A.size();i++){
        for (int j=0;j<B.size();j++){
            cout << A[i] << " as " << B[j] << "\n";
        }
    }
    return 0;
}