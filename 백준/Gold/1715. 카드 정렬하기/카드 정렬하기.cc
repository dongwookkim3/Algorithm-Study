#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>> A;
    long long n,m=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push(a);
    }
    while(A.size()!=1){
        int k=A.top();
        A.pop();
        k+=A.top();
        A.pop();
        m+=k;
        A.push(k);
    }
    cout << m;
    return 0;
}
