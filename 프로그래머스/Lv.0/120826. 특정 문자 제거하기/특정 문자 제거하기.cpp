#include <string>
using namespace std;
string solution(string s, string c){
    string a;
    for (int i=0;i<s.length();i++){
        if (s[i]!=c[0]){
            a+=s[i];
        }
    }
    return a;
}