#include <vector>
using namespace std;
vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int e=0,o=0;
    for (int i=0;i<num_list.size();i++){
        if (num_list[i]%2==0) e++;
        else o++;
    }
    answer.push_back(e);
    answer.push_back(o);
    return answer;
}