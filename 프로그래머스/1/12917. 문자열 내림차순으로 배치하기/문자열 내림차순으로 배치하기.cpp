#include <string>
#include <algorithm>
using namespace std;
string solution(string s){
    sort(s.begin(),s.end(),greater<int>());
    return s;
}