#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> A;
    int n;
    while(cin >> n){
        if (!A.empty() && A.back()>n){
            cout << "Bad";
            return 0;
        }
        A.push_back(n);
    }
    cout << "Good";
    return 0;
}