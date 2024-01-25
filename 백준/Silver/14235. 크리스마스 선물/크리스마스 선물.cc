#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> A;
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        if (a==0){
            if (A.empty()){
                cout << "-1\n";
            }
            else {
                cout << A.top() << "\n";
                A.pop();
            }
        }
        else {
            while(a--){
                int b;
                cin >> b;
                A.push(b);
            }
        }
    }
    return 0;
}