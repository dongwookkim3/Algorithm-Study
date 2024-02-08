#include <vector>
using namespace std;
vector<int> solution(int start_num, int end_num){
    vector<int> A;
    for (int i=start_num;i<=end_num;i++){
        A.push_back(i);
    }
    return A;
}