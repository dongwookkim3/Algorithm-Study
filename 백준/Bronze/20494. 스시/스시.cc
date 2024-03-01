#include <iostream>
using namespace std;
int main(){
    string A;
    int n;
    cin >> n;
    while(n--){
        string B;
        cin >> B;
        A+=B;
    }
    cout << A.length();
    return 0;
}