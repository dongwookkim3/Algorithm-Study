#include <vector>
using namespace std;
vector<vector<int>> solution(vector<int> list,int n){
    vector<vector<int>> a(list.size()/n,vector<int>(n,0));;
    for (int i=0;i<list.size()/n;i++){
        for (int j=0;j<n;j++){
            a[i][j]=list[i*n+j];
        }
    }
    return a;
}