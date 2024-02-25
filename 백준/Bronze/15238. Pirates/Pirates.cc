#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 26
using namespace std;
int main(){
    vector<int> B(MAX,0);
    int n;
    string A;
    cin >> n >> A;
    for (int i=0;i<n;i++){
        B[A[i]-97]++;
    }
    cout << char(max_element(B.begin(),B.end())-B.begin()+97) << ' ' << *max_element(B.begin(),B.end());
    return 0;
}