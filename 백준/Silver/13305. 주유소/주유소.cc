#include <iostream>
#include <queue>
#include <vector>
#define MAX 100000
using namespace std;
int main(){
    priority_queue<long long,vector<long long>,greater<long long>> B;
    long long n,m=0;
    long long A[MAX+1]={};
    cin >> n;
    for (int i=1;i<n;i++){
        cin >> A[i];
    }
    for (int i=1;i<=n;i++){
        int a;
        cin >> a;
        B.push(a);
        m+=B.top()*A[i];
    }
    cout << m;
    return 0;
}