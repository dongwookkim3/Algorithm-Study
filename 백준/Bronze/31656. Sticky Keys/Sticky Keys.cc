#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string A;
    getline(cin,A);
    A.erase(unique(A.begin(),A.end()),A.end());
    cout << A;
    return 0;
}