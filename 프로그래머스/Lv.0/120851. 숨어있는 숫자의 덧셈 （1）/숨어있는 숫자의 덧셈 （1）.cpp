#include <string>
using namespace std;
int solution(string S){
    int m=0;
    for (int i=0;i<S.length();i++){
        if (S[i]>48 && S[i]<=57){
            m+=S[i]-48;
        }
    }
    return m;
}