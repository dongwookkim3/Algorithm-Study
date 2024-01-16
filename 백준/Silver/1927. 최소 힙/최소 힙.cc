#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<long long,vector<long long>,greater<long long>> pq;
    int n;
    cin >> n;
    while(n--){
        long long a;
        cin >> a;
        if (a==0){
            if (pq.size()){
                cout << pq.top() << "\n";
                pq.pop();
            }
            else {
                cout << "0\n";
            }
        }
        else {
            pq.push(a);
        }
    }
    return 0;
}