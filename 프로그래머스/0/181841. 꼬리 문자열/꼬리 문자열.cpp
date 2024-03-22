#include <string>
#include <algorithm>
using namespace std;
string solution(vector<string> str_list, string ex){
    string A;
    for (int i=0;i<str_list.size();i++){
        if (str_list[i].find(ex)==string::npos){
            A+=str_list[i];
        }
    }
    return A;
}