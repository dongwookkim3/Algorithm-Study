#include <string>
using namespace std;
int solution(string t, string p){
    int m=0;
    for (int i=0;i<=t.length()-p.length();i++){
        if (stoull(t.substr(i,p.length()))<=stoull(p)){
            m++;
        }
    }
    return m;
}