#include <string>
using namespace std;
string solution(string s) {
    if (s[0]>90){
        s[0]-=32;
    }
    for (int i=1;i<s.length();i++){
        if (s[i-1]==' ' && s[i]>90){
            s[i]-=32;
        }
        else if (s[i-1]!=' ' && s[i]<=90 && s[i]>=65){
            s[i]+=32;
        }
    }
    return s;
}