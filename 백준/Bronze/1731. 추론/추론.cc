#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<long long> A;
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    if (A[0]+A[2]==A[1]*2) cout << A.back()+A[1]-A[0];
    else cout << A.back()*A[1]/A[0];
    return 0;
}