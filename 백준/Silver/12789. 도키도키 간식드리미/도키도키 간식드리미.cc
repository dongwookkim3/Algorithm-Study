#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main(){
    stack<int> A;
    vector<int> B,C={0};
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        B.push_back(a);
    }
    while(C.size()!=n){
        if (B.front()==C.back()+1){
            C.push_back(B.front());
            B.erase(B.begin());
        }
        else if (!A.empty() && A.top()==C.back()+1){
            C.push_back(A.top());
            A.pop();
        }
        else if (B.empty()){
            cout << "Sad";
            return 0;
        }
        else {
            A.push(B.front());
            B.erase(B.begin());
        }
    }
    cout << "Nice";
    return 0;
}