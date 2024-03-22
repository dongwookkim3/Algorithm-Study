#include <vector>
#include <algorithm>
using namespace std;
vector<int> solution(vector<int> arr, vector<int> delete_list){
    sort(delete_list.begin(),delete_list.end());
    for (int i=0;i<arr.size();){
        if (binary_search(delete_list.begin(),delete_list.end(),arr[i])){
            arr.erase(arr.begin()+i);
        }
        else {
            i++;
        }
    }
    return arr;
}