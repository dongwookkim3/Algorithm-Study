#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    priority_queue<int> A;
    int n,m,k;
    cin >> n >> m >> k;
    while(n--){
        int a;
        cin >> a;
        A.push(a);
    }
    for (int i=0;i<=k;i++){
        if (A.top()<m){
            cout << "YES\n" << i;
            return 0;
        }
        if (i!=k && A.top()!=1){
            int a=A.top()/2;
            A.pop();
            A.push(a);
        }
    }
    cout << "NO\n" << A.top();
    return 0;
}