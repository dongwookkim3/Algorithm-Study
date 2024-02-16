#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 5000
using namespace std;
int main(){
    vector<int> A(MAX,0);
    int n,k,m=0;
    cin >> n >> k;
    int a=0,b=n-1;
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    sort(A.begin(),A.begin()+n);
    while(a<b){
        if (A[a]+A[b]<=k){
            m++;
            a++;
        }
        b--;
    }
    cout << m;
    return 0;
}