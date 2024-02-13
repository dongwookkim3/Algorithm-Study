#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<long long> A;
    int n;
    cin >> n;
    while(n--){
        string a;
        cin >> a;
        reverse(a.begin(),a.end());
        A.push_back(stoll(a));
    }
    sort(A.begin(),A.end());
    for (int i=0;i<A.size();i++){
        cout << A[i] << "\n";
    }
    return 0;
}