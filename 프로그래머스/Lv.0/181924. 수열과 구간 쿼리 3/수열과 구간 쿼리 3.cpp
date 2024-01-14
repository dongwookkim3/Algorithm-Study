#include <vector>
using namespace std;
vector<int> solution(vector<int> A,vector<vector<int>> Q){
    for (int i=0;i<Q.size();i++){
        int t=A[Q[i][0]];
        A[Q[i][0]]=A[Q[i][1]];
        A[Q[i][1]]=t;
    }
    return A;
}