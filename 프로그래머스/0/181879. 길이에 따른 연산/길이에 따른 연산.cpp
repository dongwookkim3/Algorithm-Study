#include <vector>
using namespace std;
int solution(vector<int> num_list) {
    if (num_list.size()>=11){
        for (int i=1;i<num_list.size();i++){
            num_list[i]+=num_list[i-1];
        }
    }
    else {
        for (int i=1;i<num_list.size();i++){
            num_list[i]*=num_list[i-1];
        }
    }
    return num_list[num_list.size()-1];
}