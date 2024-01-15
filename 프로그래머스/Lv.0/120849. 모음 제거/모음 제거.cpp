#include <string>
using namespace std;
string solution(string S){
    string A;
    for (int i=0;i<S.length();i++){
        if (S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u'){
            A+=S[i];
        }
    }
    return A;
}