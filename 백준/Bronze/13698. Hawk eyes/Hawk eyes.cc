#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 4
using namespace std;
void swap(int &A,int &B){
    int t=A;
    A=B;
    B=t;
}
int main(){
    vector<pair<int,int>> C={};
    for (int i=1;i<=MAX;i++){
        for (int j=i+1;j<=MAX;j++){
            C.push_back(make_pair(i,j));
        }
    }
    vector<int> A={0,1,0,0,2};
    string B;
    cin >> B;
    for (int i=0;i<B.length();i++){
        swap(A[C[B[i]-65].first],A[C[B[i]-65].second]);
    }
    cout << find(A.begin(),A.end(),1)-A.begin() << "\n" << find(A.begin(),A.end(),2)-A.begin();
    return 0;
}