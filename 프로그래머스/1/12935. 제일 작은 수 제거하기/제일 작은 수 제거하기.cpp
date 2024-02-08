#include <vector>
#include <algorithm>
#define MIN 10000
using namespace std;
vector<int> solution(vector<int> arr){
    int m=MIN;
    for (int i=0;i<arr.size();i++){
        if (arr[i]<m){
            m=arr[i];
        }
    }
    arr.erase(find(arr.begin(),arr.end(),m));
    if (arr.size()==0){
        return {-1};
    }
    else {
        return arr;
    }
}