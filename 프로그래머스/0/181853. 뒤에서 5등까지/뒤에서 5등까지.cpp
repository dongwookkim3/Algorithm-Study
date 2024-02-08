#include <vector>
#include <algorithm>
using namespace std;
vector<int> solution(vector<int> num_list){
    sort(num_list.begin(),num_list.end());
    while(num_list.size()>=6){
        num_list.pop_back();
    }
    return num_list;
}