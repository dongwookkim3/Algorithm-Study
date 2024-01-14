#include <vector>
using namespace std;
vector<int> solution(vector<int> list){
    if (list[list.size()-1]>list[list.size()-2]){
        list.push_back(list[list.size()-1]-list[list.size()-2]);
    }
    else {
        list.push_back(list[list.size()-1]*2);
    }
    return list;
}