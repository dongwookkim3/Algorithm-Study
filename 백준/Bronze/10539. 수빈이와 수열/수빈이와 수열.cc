#include <iostream>
#include <vector>
#define MAX 100
using namespace std;
int main(){
    vector<int> A(MAX+1);
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
        cout << A[i]*i-A[i-1]*(i-1) << ' ';
    }
    return 0;
}