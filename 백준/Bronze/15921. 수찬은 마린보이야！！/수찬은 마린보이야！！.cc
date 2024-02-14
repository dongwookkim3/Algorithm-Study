#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100
using namespace std;
int main(){
    vector<int> A,B(MAX+1,0);
    int n,m=0,s=0;
    cin >> n;
    if (n==0){
        cout << "divide by zero";
        return 0;
    }
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        m+=a;
        if (!B[a]) A.push_back(a);
        B[a]++;
    }
    for (int i=0;i<A.size();i++){
        s+=A[i]*B[A[i]];
    }
    cout << fixed;
    cout.precision(2);
    cout << (float)m/s;
    return 0;
}