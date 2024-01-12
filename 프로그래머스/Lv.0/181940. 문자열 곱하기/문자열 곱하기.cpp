#include <string>
using namespace std;
string solution(string s,int n){
    string a;
    while(n--){
        a+=s;
    }
    return a;
}