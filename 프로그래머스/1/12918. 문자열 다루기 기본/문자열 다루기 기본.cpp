#include <string>
using namespace std;
bool solution(string s){
    if (s.length()==4 || s.length()==6){
        for (int i=0;i<s.length();i++){
            if (s[i]>57){
                return false;
            }
        }
        return true;
    }
    return false;
}