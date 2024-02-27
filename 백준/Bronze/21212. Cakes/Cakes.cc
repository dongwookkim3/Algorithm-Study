#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A;
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        A.push_back(b/a);
    }
    cout << *min_element(A.begin(),A.end());
    return 0;
}