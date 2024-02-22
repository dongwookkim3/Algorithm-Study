#include <string>
#define MAX 10
using namespace std;
int solution(string s){
    string A,B[MAX]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    for (int i=0;i<s.length();i++){
        if (s[i]<=57){
            A+=s[i];
            continue;
        }
        for (int j=0;j<MAX;j++){
            if (s.substr(i,B[j].length())==B[j]){
                A+=to_string(j);
            }
        }
    }
    return stoi(A);
}