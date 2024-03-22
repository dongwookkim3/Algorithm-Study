#include <vector>
using namespace std;
int solution(vector<int> num_list){
    int A=0,B=0;
    for (int i=0;i<num_list.size();i++){
        if (i%2){
            A+=num_list[i];
        }
        else {
            B+=num_list[i];
        }
    }
    return max(A,B);
}