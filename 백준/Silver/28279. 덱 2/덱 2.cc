#include <iostream>
#include <deque>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    deque<int> A;
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        if (m==1){
            int a;
            cin >> a;
            A.insert(A.begin(),a);
        }
        else if (m==2){
            int a;
            cin >> a;
            A.push_back(a);
        }
        else if (m==5){
            cout << A.size() << "\n";
        }
        else if (m==6){
            cout << A.empty() << "\n";
        }
        else {
            if (A.empty()){
                cout << "-1\n";
            }
            else if (m==3 || m==7){
                cout << A.front() << "\n";
                if (m==3){
                    A.erase(A.begin());
                }
            }
            else {
                cout << A.back() << "\n";
                if (m==4){
                    A.pop_back();
                }
            }
        }
    }
    return 0;
}