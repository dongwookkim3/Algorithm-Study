#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    cout << accumulate(A.begin(),A.end(),0) << "\n";
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        if (a==1){
            A[i]=0;
        }
    }
    cout << accumulate(A.begin(),A.end(),0);
    return 0;
}