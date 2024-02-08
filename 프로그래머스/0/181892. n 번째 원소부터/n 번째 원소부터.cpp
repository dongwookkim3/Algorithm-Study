#include <vector>
using namespace std;
vector<int> solution(vector<int> num_list, int n){
    vector<int> A;
    for (int i=n-1;i<num_list.size();i++){
        A.push_back(num_list[i]);
    }
    return A;
}