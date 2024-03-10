#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A;
    string S;
    cin >> S;
    for (int i=0;i<S.length();i++){
        if (S[i]=='.'){
            A.push_back(0);
        }
        else if ((i!=0 && S[i-1]=='.') || A.empty()){
            A.push_back(1);
        }
        else {
            A.back()++;
        }
    }
    for (int i=0;i<A.size();i++){
        if (A[i]%2!=0){
            cout << -1;
            return 0;
        }
    }
    for (int i=0;i<A.size();i++){
        if (A[i]==0){
            cout << '.';
        }
        while(A[i]>=4){
            cout << "AAAA";
            A[i]-=4;
        }
        if (A[i]==2){
            cout << "BB";
        }
    }
    return 0;
}