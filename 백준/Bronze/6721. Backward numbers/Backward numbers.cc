#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string A,B;
        cin >> A >> B;
        reverse(A.begin(),A.end());
        reverse(B.begin(),B.end());
        A=to_string(stoi(A)+stoi(B));
        reverse(A.begin(),A.end());
        cout << stoi(A) << "\n";
    }
    return 0;
}