#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<string> A;
    string a;
    cin >> a;
    for (int i=0;i<a.length();i++){
        A.push_back(a.substr(i,a.length()-i));
    }
    sort(A.begin(),A.end());
    for (int i=0;i<A.size();i++){
        cout << A[i] << "\n";
    }
    return 0;
}