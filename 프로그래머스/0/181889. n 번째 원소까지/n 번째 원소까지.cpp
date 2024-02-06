#include <vector>
using namespace std;
vector<int> solution(vector<int> num_list, int n){
    int size=num_list.size();
    for (int i=0;i<size-n;i++){
        num_list.pop_back();
    }
    return num_list;
}