#include <string>
#include <vector>
using namespace std;
vector<string> solution(vector<string> todo_list, vector<bool> finished){
    for (int i=0;i<finished.size();){
        if (finished[i]){
            todo_list.erase(todo_list.begin()+i);
            finished.erase(finished.begin()+i);
        }
        else {
            i++;
        }
    }
    return todo_list;
}