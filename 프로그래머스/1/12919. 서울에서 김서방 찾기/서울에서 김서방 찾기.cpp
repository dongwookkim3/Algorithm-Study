#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string solution(vector<string> seoul){
    return "김서방은 "+to_string(find(seoul.begin(),seoul.end(),"Kim")-seoul.begin())+"에 있다";
}