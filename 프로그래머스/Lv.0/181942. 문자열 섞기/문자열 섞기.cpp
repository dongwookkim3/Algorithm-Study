#include <string>
using namespace std;
string solution(string s1, string s2){
    string a;
    for (int i=0;i<s1.length();i++){
        a+=s1[i];
        a+=s2[i];
    }
    return a;
}