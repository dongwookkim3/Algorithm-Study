#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    while(n--){
        cin >> A[n];
    }
    sort(A.begin(),A.end());
    A.erase(unique(A.begin(),A.end()),A.end());
    for (int i=0;i<A.size();i++){
        cout << A[i] << "\n";
    }
    return 0;
}