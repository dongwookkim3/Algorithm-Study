#include <vector>
using namespace std;
vector<int> solution(vector<int> arr, int k){
    for (int i=0;i<arr.size();i++){
        if (k%2==0){
            arr[i]+=k;
        }
        else {
            arr[i]*=k;
        }
    }
    return arr;
}