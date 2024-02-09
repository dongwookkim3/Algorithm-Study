#include <vector>
using namespace std;
int solution(vector<int> arr1, vector<int> arr2){
    if (arr1.size()!=arr2.size()){
        if (arr1.size()>arr2.size()) return 1;
        else return -1;
    }
    int A=0,B=0;
    for (int i=0;i<arr1.size();i++){
        A+=arr1[i];
    }
    for (int i=0;i<arr2.size();i++){
        B+=arr2[i];
    }
    if (A>B) return 1;
    else if (A<B) return -1;
    else return 0;
}