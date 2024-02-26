#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    vector<int> A;
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    cout << accumulate(A.begin(),A.end(),0)-*max_element(A.begin(),A.end());
    return 0;
}