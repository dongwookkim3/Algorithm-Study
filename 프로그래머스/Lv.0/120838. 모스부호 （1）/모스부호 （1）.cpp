#include <string>
using namespace std;
string A[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
string solution(string morse){
    string a,s;
    for (int i=0;i<=morse.length();i++){
        if (morse[i]!=' ' && i!=morse.length()){
            s+=morse[i];
        }
        else {
            for (int j=0;j<26;j++){
                if (s==A[j]){
                    a+=j+97;
                    s="";
                    break;
                }
            }
        }
    }
    return a;
}