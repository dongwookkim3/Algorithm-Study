#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#define MAX 20000
using namespace std;
int main(){
    vector<int> A(MAX,0);
    int n,m=INT_MAX,mindex;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    for (int i=0;i<n;i++){
        int s=0;
        for (int j=0;j<n;j++){
            s+=abs(A[i]-A[j]);
        }
        if (m>s || (m==s && A[mindex]>A[i])){
            m=s;
            mindex=i;
        }
    }
    cout << A[mindex];
    return 0;
}