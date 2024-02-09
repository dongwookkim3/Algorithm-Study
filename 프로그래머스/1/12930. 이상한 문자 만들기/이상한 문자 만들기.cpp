#include <string>
using namespace std;
string solution(string s){
    int k=0;
    for (int i=0;i<s.length();i++){
        if (s[i]==' '){
            k=0;
            continue;
        }
        if (k%2==0 && s[i]>90){
            s[i]-=32;
        }
        else if (k%2==1 && s[i]<=90){
            s[i]+=32;
        }
        k++;
    }
    return s;
}