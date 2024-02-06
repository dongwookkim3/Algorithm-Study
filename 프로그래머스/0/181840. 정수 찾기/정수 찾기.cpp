#include <vector>
#include <algorithm>
using namespace std;
int solution(vector<int> num_list, int n){
    sort(num_list.begin(),num_list.end());
    return binary_search(num_list.begin(),num_list.end(),n);
}