#include <iostream>
#include <stack>
using namespace std;
bool solution(string s){
    stack<char> A;
    for (int i=0;i<s.length();i++){
        if (s[i]=='('){
            A.push(s[i]);
        }
        else {
            if (A.empty()){
                return false;
            }
            else {
                A.pop();
            }
        }
    }
    if (A.empty()){
        return true;
    }
    else {
        return false;
    }
}