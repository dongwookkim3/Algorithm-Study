#include <iostream>
#include <vector>
#define MAX 3
using namespace std;
vector<int> A;
long long B;
long long backtracking(int n){
    if (n==0){
        return B%3==0;
    }
    long long m=0;
    for (int i=(B==0);i<MAX;i++){
        B=B*10+A[i];
        m+=backtracking(n-1);
        B/=10;
    }
    return m;
}
int main(){
    int n;
    cin >> n;
    for (int i=0;i<MAX;i++){
        A.push_back(i);
    }
    cout << backtracking(n);
    return 0;
}