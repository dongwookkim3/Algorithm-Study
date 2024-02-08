#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100000
using namespace std;
vector<int> B;
vector<bool> P(MAX+1,false);
void backtracking(vector<int> &A,int d,int m,int index){
    if (d<=0){
        if (P[m]==0){
            B.push_back(m);
        }
        return;
    }
    for (int i=index;i<A.size();i++){
        backtracking(A,d-1,m+A[i],i+1);
    }
}
int main(){
    P[0]=P[1]=true;
    for (long long i=2;i*i<=MAX;i++){
        if (P[i]==0){
            for (long long j=i*i;j<=MAX;j+=i){
                P[j]=true;
            }
        }
    }
    vector<int> A;
    int n,m;
    cin >> n >> m;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    backtracking(A,m,0,0);
    sort(B.begin(),B.end());
    B.erase(unique(B.begin(),B.end()),B.end());
    if (B.size()==0){
        cout << -1;
    }
    for (int i=0;i<B.size();i++){
        cout << B[i] << ' ';
    }
    return 0;
}