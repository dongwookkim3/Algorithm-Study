#include <string>
using namespace std;
string solution(string code){
    bool mode=0;
    string a;
    for (int i=0;i<code.length();i++){
        if (code[i]=='1') mode=!mode;
        else if (!mode && !(i%2)){
            a+=code[i];
        }
        else if (mode && i%2){
            a+=code[i];
        }
    }
    if (a.length()==0) return "EMPTY";
    else return a;
}