#include <vector>
using namespace std;
vector<int> solution(vector<int> arr){
    for (int i=0;i<arr.size();i++){
        for (int j=1;j<arr[i];j++){
            arr.insert(arr.begin()+i,arr[i]);
        }
        i+=arr[i]-1;
    }
    return arr;
}