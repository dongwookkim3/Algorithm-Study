#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        string A;
        getline(cin,A);
        cout << A;
        if (A.back()!='.') cout << '.';
        cout << "\n";
    }
    return 0;
}