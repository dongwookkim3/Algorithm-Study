#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> A,B;
void backtracking(int n,int s,int &m,int &p){
    if (n==0){
        B.pop_back();
        return;
    }
    for (int i=(B.empty()) ? 0 : B.back();i<A.size();i++){
        if (find(B.begin(),B.end(),i)==B.end()){
            B.push_back(i);
            p+=A[i];
            if (s==p){
                m++;
            }
            backtracking(n-1,s,m,p);
            p-=A[i];
        }
    }
    B.pop_back();
}
int main(){
    int n,s,m=0,p=0;
    cin >> n >> s;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        A.push_back(a);
    }
    backtracking(n,s,m,p);
    cout << m;
    return 0;
}