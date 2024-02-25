#include <iostream>
#include <algorithm>
#define MAX 26
using namespace std;
int main(){
    int B[MAX]={};
    int n;
    string A;
    cin >> n >> A;
    for (int i=0;i<n;i++){
        B[A[i]-65]++;
    }
    cout << min({B[0],B[2],B[7],B[8],B[17]});
    return 0;
}