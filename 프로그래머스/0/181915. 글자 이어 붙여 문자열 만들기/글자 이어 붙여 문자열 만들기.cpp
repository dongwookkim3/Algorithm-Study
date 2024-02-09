#include <string>
#include <vector>
using namespace std;
string solution(string my_string, vector<int> index_list){
    string A;
    for (int i=0;i<index_list.size();i++){
        A+=my_string[index_list[i]];
    }
    return A;
}