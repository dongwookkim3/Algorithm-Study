#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    queue<int> A,B;
    stack<int> C;
    int n,m;
    cin >> n;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        B.push(a);
    }
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        if (B.front()==0){
            C.push(a);
        }
        B.pop();
    }
    while(!C.empty()){
        A.push(C.top());
        C.pop();
    }
    cin >> m;
    int index=m-A.size();
    for (int i=0;i<index;i++){
        int a;
        cin >> a;
        A.push(a);
    }
    while(m--){
        cout << A.front() << ' ';
        A.pop();
    }
    return 0;
}