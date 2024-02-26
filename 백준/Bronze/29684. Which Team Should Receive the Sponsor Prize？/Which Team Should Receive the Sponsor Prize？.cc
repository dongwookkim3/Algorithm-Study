#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n;
    while(cin >> n && n!=0){
        vector<int> A;
        while(n--){
            int a;
            cin >> a;
            A.push_back(abs(2023-a));
        }
        cout << find(A.begin(),A.end(),*min_element(A.begin(),A.end()))-A.begin()+1 << "\n";
    }
    return 0;
}