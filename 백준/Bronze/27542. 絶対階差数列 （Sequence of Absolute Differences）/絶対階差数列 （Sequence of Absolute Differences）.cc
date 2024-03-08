#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    while(A.size()!=1){
        vector<int> B;
        for (int i=0;i<A.size()-1;i++){
            B.push_back(abs(A[i]-A[i+1]));
        }
        A=B;
    }
    cout << A.front();
    return 0;
}