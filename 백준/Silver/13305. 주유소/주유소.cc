#include <iostream>
#include <queue>
#include <vector>
#define MAX 100000
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>> B;
    int n,m=0;
    int A[MAX]={};
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