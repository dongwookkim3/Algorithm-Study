#include <string>
using namespace std;
string solution(string rsp){
    string A;
    for (int i=0;i<rsp.length();i++){
        if (rsp[i]=='0'){
            A+="5";
        }
        else if (rsp[i]=='2'){
            A+="0";
        }
        else {
            A+="2";
        }
    }
    return A;
}