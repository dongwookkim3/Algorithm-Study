#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    getchar();
    while(n--){
        string A,B;
        getline(cin,A);
        istringstream iss(A);
        while(getline(iss,B,' ')){
            reverse(B.begin(),B.end());
            cout << B << ' ';
        }
        cout << "\n";
    }
    return 0;
}