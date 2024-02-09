#include <string>
using namespace std;
string solution(string s, int n){
    for (int i=0;i<s.length();i++){
        if (s[i]==' '){
            continue;
        }
        for (int j=0;j<n;j++){
            s[i]++;
            if (s[i]==91 || s[i]==123){
                s[i]-=26;
            }
        }
    }
    return s;
}