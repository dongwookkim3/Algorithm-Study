#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>> A;
    long long n,k;
    cin >> n >> k;
    while(--n){
        int a;
        cin >> a;
        A.push(a);
    }
    while(!A.empty()){
        if (k<=A.top()){
            cout << "No";
            return 0;
        }
        k+=A.top();
        A.pop();
    }
    cout << "Yes";
    return 0;
}