#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A;
    int n,m=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end());
    for (int i=1;i<A.size();i++){
        m+=A[i]-A[i-1];
    }
    cout << m+A.back()-A.front();
    return 0;
}