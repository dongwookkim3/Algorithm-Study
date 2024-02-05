#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        string A,B;
        cin >> A >> B;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        if (A==B){
            cout << "Possible\n";
        }
        else {
            cout << "Impossible\n";
        }
    }
    return 0;
}