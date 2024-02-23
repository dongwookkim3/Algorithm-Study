#include <iostream>
#include <vector>
#define MAX 50
using namespace std;
int main(){
    vector<int> A(MAX),B(MAX);
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i] >> B[i];
    }
    for (int i=0;i<n;i++){
        int m=1;
        for (int j=0;j<n;j++){
            if (i==j) continue;
            if (A[j]>A[i] && B[j]>B[i]){
                m++;
            }
        }
        cout << m << ' ';
    }
    return 0;
}