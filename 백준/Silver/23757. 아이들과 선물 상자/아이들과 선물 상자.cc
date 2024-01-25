#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> A;
    int n,m;
    cin >> n >> m;
    while(n--){
        int a;
        cin >> a;
        A.push(a);
    }
    while(m--){
        int a;
        cin >> a;
        if (A.top()>=a){
            int b=A.top()-a;
            A.pop();
            A.push(b);
        }
        else {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}