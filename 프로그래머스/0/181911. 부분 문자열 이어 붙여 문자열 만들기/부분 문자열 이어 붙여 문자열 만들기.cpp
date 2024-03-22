#include <string>
#include <vector>
using namespace std;
string solution(vector<string> my_strings, vector<vector<int>> parts){
    string A;
    for (int i=0;i<parts.size();i++){
        A+=my_strings[i].substr(parts[i].front(),parts[i].back()-parts[i].front()+1);
    }
    return A;
}