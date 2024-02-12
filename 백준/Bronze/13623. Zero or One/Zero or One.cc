#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 3
using namespace std;
int main(){
    vector<int> A(MAX),B;
    for (int i=0;i<MAX;i++){
        cin >> A[i];
    }
    B=A;
    sort(B.begin(),B.end());
    if (B.front()==1 || B.back()==0) cout << '*';
    if (B[1]==1){
        for (int i=0;i<MAX;i++){
            if (A[i]==0){
                cout << char(65+i);
            }
        }
    }
    else {
        for (int i=0;i<MAX;i++){
            if (A[i]==1){
                cout << char(65+i);
            }
        }
    }
    return 0;
}