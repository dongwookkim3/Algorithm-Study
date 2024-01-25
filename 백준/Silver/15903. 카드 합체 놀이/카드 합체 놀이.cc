#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    priority_queue<long long,vector<long long>,greater<long long>> A;
    long long n,m,s=0;
    cin >> n >> m;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        A.push(a);
    }
    while(m--){
        long long t=0;
        for (int i=0;i<2;i++){
            t+=A.top();
            A.pop();
        }
        for (int i=0;i<2;i++){
            A.push(t);
        }
    }
    while(n--){
        s+=A.top();
        A.pop();
    }
    cout << s;
    return 0;
}