#include <vector>
using namespace std;
vector<int> solution(vector<int> A,vector<vector<int>> Q){
    vector<int> a;
    for (int i=0;i<Q.size();i++){
        int m=1000000;
        for (int j=Q[i][0];j<=Q[i][1];j++){
            if (A[j]>Q[i][2] && A[j]<m){
                m=A[j];
            }
        }
        if (m==1000000){
            a.push_back(-1);
        }
        else {
            a.push_back(m);
        }
    }
    return a;
}