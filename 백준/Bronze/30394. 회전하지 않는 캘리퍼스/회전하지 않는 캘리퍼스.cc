#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> B;
    int n;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        B.push_back(b);
    }
    cout << *max_element(B.begin(),B.end())-*min_element(B.begin(),B.end());
    return 0;
}