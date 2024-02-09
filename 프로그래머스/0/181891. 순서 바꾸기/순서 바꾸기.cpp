#include <vector>
using namespace std;
vector<int> solution(vector<int> num_list, int n){
    vector<int> A;
    for (int i=n;i<num_list.size();i++){
        A.push_back(num_list[i]);
    }
    for (int i=0;i<n;i++){
        A.push_back(num_list[i]);
    }
    return A;
}