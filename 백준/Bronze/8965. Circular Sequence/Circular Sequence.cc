#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<string> A;
        string a;
        cin >> a;
        for (int i=0;i<a.length();i++){
            A.push_back(a);
            a.push_back(a.front());
            a.erase(a.begin());
        }
        sort(A.begin(),A.end());
        cout << A.front() << "\n";
    }
    return 0;
}