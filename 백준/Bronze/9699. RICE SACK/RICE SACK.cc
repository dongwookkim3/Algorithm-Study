#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 5
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        vector<int> A(MAX);
        for (int j=0;j<MAX;j++){
            cin >> A[j];
        }
        cout << "Case #" << i << ": " << *max_element(A.begin(),A.end()) << "\n";
    }
    return 0;
}