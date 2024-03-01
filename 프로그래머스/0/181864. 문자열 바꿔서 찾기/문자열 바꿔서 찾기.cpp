#include <string>
using namespace std;
int solution(string myString, string pat){
    for (int i=0;i<pat.length();i++){
        if (pat[i]=='A'){
            pat[i]='B';
        }
        else {
            pat[i]='A';
        }
    }
    return (myString.find(pat)!=string::npos);
}