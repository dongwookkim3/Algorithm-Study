#include <iostream>
#include <stack>
using namespace std;
int main(){
    string A;
    while(getline(cin,A)){
        if (A==".") break;
        stack<char> s;
        for (int i=0;i<A.length();i++){
            if (A[i]=='[' || A[i]=='('){
                s.push(A[i]);
            }
            else if (A[i]==']'){
                if (s.empty()){
                    cout << "no\n";
                    break;
                }
                if (s.top()!='['){
                    cout << "no\n";
                    break;
                }
                else {
                    s.pop();
                }
            }
            else if (A[i]==')'){
                if (s.empty()){
                    cout << "no\n";
                    break;
                }
                if (s.top()!='('){
                    cout << "no\n";
                    break;
                }
                else {
                    s.pop();
                }
            }
            if (i==A.length()-1){
                if (s.empty()) {
                    cout << "yes\n";
                }
                else {
                    cout << "no\n";
                }
            }
        }
    }
    return 0;
}