#include <string>
using namespace std;
string solution(string s,int n){
    string a;
    for (int i=0;i<s.length();i++){
        a.append(n,s[i]);
    }
    return a;
}