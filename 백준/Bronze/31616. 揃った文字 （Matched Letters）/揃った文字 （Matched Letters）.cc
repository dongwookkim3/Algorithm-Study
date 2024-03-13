#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    string A;
    cin >> n >> A;
    sort(A.begin(),A.end());
    if (A.front()==A.back()){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}