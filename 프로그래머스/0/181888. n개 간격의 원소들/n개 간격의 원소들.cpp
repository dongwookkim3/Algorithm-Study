#include <vector>
using namespace std;
vector<int> solution(vector<int> num_list, int n){
    vector<int> A;
    for (int i=0;i<num_list.size();i+=n){
        A.push_back(num_list[i]);
    }
    return A;
}