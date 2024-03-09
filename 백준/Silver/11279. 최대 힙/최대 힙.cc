#include <iostream>
#include <queue>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<long long> A;
    int n;
    cin >> n;
    while(n--){
        long long a;
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