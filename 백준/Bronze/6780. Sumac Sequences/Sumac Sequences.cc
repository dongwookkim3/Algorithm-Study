#include <iostream>
#include <vector>
#define MAX 2
using namespace std;
int main(){
    vector<int> A(MAX);
    for (int i=0;i<MAX;i++){
        cin >> A[i];
    }
    while(A[A.size()-2]>=A[A.size()-1]){
        A.push_back(A[A.size()-2]-A[A.size()-1]);
    }
    cout << A.size();
    return 0;
}