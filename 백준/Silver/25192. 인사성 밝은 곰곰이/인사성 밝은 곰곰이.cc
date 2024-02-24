#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<string> A;
    int n,m=0;
    cin >> n;
    while(n--){
        string a;
        cin >> a;
        if (a!="ENTER"){
            A.push_back(a);
        }
        else {
            sort(A.begin(),A.end());
            A.erase(unique(A.begin(),A.end()),A.end());
            m+=A.size();
            A.clear();
        }
    }
    sort(A.begin(),A.end());
    A.erase(unique(A.begin(),A.end()),A.end());
    cout << m+A.size();
    return 0;
}