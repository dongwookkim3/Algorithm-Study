#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000
using namespace std;
int main(){
    vector<int> A(MAX+1);
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A[a]++;
    }
    sort(A.begin(),A.end());
    cout << A.back();
    return 0;
}