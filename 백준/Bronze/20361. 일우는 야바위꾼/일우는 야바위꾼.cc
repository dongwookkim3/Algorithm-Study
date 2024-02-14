#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 200000
using namespace std;
void swap(int &A,int &B){
    int t=A;
    A=B;
    B=t;
}
int main(){
    vector<int> A(MAX+1,0);
    int N,X,K;
    cin >> N >> X >> K;
    A[X]=1;
    while(K--){
        int a,b;
        cin >> a >> b;
        swap(A[a],A[b]);
    }
    cout << find(A.begin(),A.end(),1)-A.begin();
    return 0;
}