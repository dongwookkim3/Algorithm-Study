#include <iostream>
#include <stack>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    stack<int> S;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        if (a==1){
            int b;
            cin >> b;
            S.push(b);
        }
        else if (a==2){
            if (S.empty()){
                cout << "-1\n";
            }
            else {
                cout << S.top() << "\n";
                S.pop();
            }
        }
        else if (a==3){
            cout << S.size() << "\n";
        }
        else if (a==4){
            cout << (S.empty()) << "\n";
        }
        else if (a==5){
            if (S.empty()){
                cout << "-1\n";
            }
            else {
                cout << S.top() << "\n";
            }
        }
    }
    return 0;
}