#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string A;
    int n;
    cin >> n;
    while(n--){
        string B;
        cin >> B;
        A+=B.front();
    }
    sort(A.begin(),A.end());
    cout << (A.front()==A.back());
    return 0;
}