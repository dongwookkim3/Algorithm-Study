#include <string>
using namespace std;
string solution(string s){
    if (s.length()%2==1){
        return string(1,s[s.length()/2]);
    }
    else {
        return s.substr(s.length()/2-1,2);
    }
}