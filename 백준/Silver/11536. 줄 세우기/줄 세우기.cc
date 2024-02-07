#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<string> A,B;
    int n;
    cin >> n;
    while(n--){
        string a;
        cin >> a;
        A.push_back(a);
        B.push_back(a);
    }
    sort(B.begin(),B.end());
    if (A==B){
        cout << "INCREASING";
        return 0;
    }
    sort(B.begin(),B.end(),greater<string>());
    if (A==B){
        cout << "DECREASING";
    }
    else {
        cout << "NEITHER";
    }
    return 0;
}