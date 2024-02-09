#include <string>
#include <algorithm>
using namespace std;
int solution(string myString, string pat){
    for (int i=0;i<myString.length();i++){
        if (myString[i]>90){
            myString[i]-=32;
        }
    }
    for (int i=0;i<pat.length();i++){
        if (pat[i]>90){
            pat[i]-=32;
        }
    }
    return (myString.find(pat)!=string::npos);
}