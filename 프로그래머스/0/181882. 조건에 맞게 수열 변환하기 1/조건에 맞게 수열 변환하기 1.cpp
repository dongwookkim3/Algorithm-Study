#include <vector>
using namespace std;
vector<int> solution(vector<int> arr){
    for (int i=0;i<arr.size();i++){
        if (arr[i]>=50 && arr[i]%2==0){
            arr[i]/=2;
        }
        else if (arr[i]<50 && arr[i]%2==1){
            arr[i]*=2;
        }
    }
    return arr;
}