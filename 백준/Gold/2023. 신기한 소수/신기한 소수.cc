#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<char> A={'0','1','2','3','4','5','6','7','8','9'};
string B;
bool prime(int n){
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            return true;
        }
    }
    return false;
}
void backtracking(int n){
    if (!B.empty() && prime(stoi(B))){
        B.pop_back();
        return;
    }
    else if (n==0){
        cout << B << "\n";
        B.pop_back();
        return;
    }
    for (int i=bool(B.empty())*2;i<10;i++){
        B+=A[i];
        backtracking(n-1);
    }
    B.pop_back();
}
int main(){
    int n;
    cin >> n;
    backtracking(n);
    return 0;
}