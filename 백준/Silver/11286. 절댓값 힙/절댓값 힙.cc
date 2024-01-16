#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;
struct compare{
    bool operator()(int a,int b){
        if (abs(a)==abs(b)) return a>b;
        return abs(a)>abs(b);
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<long long,vector<long long>,compare> pq;
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