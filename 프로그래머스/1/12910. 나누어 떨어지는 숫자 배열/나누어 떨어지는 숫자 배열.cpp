#include <vector>
#include <algorithm>
using namespace std;
vector<int> solution(vector<int> arr, int divisor){
    vector<int> A;
    for (int i=0;i<arr.size();i++){
        if (arr[i]%divisor==0){
            A.push_back(arr[i]);
        }
    }
    if (A.size()==0){
        return {-1};
    }
    sort(A.begin(),A.end());
    return A;
}