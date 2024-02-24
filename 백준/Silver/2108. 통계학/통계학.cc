#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define MAX 8000
using namespace std;
int main(){
    vector<int> A,C;
    int B[MAX+1]={};
    int n,m=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
        B[a+4000]++;
        if (B[a+4000]>m){
            m=B[a+4000];
        }
    }
    for (int i=0;i<=MAX;i++){
        if (B[i]==m){
            C.push_back(i-4000);
        }
    }
    sort(A.begin(),A.end());
    if (round(accumulate(A.begin(),A.end(),0.0)/A.size())==0) cout << "0\n";
    else cout << round(accumulate(A.begin(),A.end(),0.0)/A.size()) << "\n";
    cout << A[A.size()/2] << "\n";
    if (C.size()==1) cout << C.front() << "\n";
    else cout << C[1] << "\n";
    cout << *max_element(A.begin(),A.end())-*min_element(A.begin(),A.end());
    return 0;
}