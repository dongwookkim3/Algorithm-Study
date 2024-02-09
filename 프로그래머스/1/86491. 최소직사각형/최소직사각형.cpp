#include <vector>
#include <algorithm>
using namespace std;
int solution(vector<vector<int>> sizes){
    vector<int> A,B;
    for (int i=0;i<sizes.size();i++){
        A.push_back(max(sizes[i][0],sizes[i][1]));
        B.push_back(min(sizes[i][0],sizes[i][1]));
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    return A.back()*B.back();
}