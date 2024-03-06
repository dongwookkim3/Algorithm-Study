#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>> A;
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push(a);
    }
    float m=A.top();
    A.pop();
    while(!A.empty()){
        m=(m+A.top())/2;
        A.pop();
    }
    cout << fixed;
    cout.precision(6);
    cout << m;
    return 0;
}