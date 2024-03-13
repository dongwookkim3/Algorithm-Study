#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    while(n--){
        cin >> A[n];
    }
    sort(A.begin(),A.end());
    while(A.size()>=3){
        if (find(A.begin(),A.end(),A.front()+3)!=A.end() && find(A.begin(),A.end(),A.front()+6)!=A.end()){
            cout << "Yes";
            return 0;
        }
        A.erase(A.begin());
    }
    cout << "No";
    return 0;
}