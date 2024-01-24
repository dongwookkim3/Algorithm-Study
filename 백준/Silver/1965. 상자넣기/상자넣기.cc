#include <iostream>
#include <vector>
#define MAX 1000
using namespace std;
int main(){
    vector<int> A;
    vector<int> B(MAX,0);
    int n,m=0;
    cin >> n;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        A.push_back(a);
    }
    for (int i=1;i<n;i++){
        for (int j=0;j<i;j++){
            if (B[i]<=B[j] && A[i]>A[j]){
                B[i]=B[j]+1;
            }
        }
    }
    for (int i=0;i<n;i++){
        if (B[i]>m){
            m=B[i];
        }
    }
    cout << ++m;
    return 0;
}