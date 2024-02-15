#include <iostream>
#include <vector>
#include <sstream>
#define MAX 100000
using namespace std;
int main(){
    vector<int> A;
    int n,k;
    string B,C;
    cin >> n >> k >> B;
    istringstream iss(B);
    while(getline(iss,C,',')){
        A.push_back(stoi(C));
    }
    while(k--){
        for (int i=A.size()-1;i>=1;i--){
            A[i]-=A[i-1];
        }
        A.erase(A.begin());
    }
    for (int i=0;i<A.size();i++){
        cout << A[i];
        if (i!=A.size()-1){
            cout << ',';
        }
    }
    return 0;
}