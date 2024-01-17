#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 1000000
using namespace std;
vector<int> A;
int search(int t){
    int l=0,r=A.size();
    while(l<=r){
        int m=l+(r-l)/2;
        if (A[m]<t){
            l=m+1;
        }
        else {
            r=m-1;
        }
    }
    return l;
}
int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        A.push_back(a);
    }
    vector<int> B=A;
    sort(A.begin(),A.end());
    auto i=std::unique(A.begin(),A.end());
    A.erase(i,A.end());
    for (int i=0;i<n;i++){
        cout << search(B[i]) << ' ';
    }
    return 0;
}