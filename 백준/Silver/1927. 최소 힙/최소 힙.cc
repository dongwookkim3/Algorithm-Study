#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<int,vector<int>,greater<int>> A;
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        if (a==0){
            if (A.empty()){
                cout << "0\n";
                continue;
            }
            cout << A.top() << "\n";
            A.pop();
        }
        else {
            A.push(a);
        }
    }
    return 0;
}