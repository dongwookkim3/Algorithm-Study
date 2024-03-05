#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A;
    int n,m;
    string B;
    cin >> n >> m >> B;
    for (int i=0;i<B.length();i++){
        if (B.substr(i,3)=="IOI"){
            if (A.empty()) A.push_back(1);
            else A.push_back(A.back()+1);
            i++;
        }
        else {
            A.push_back(0);
        }
    }
    sort(A.begin(),A.end(),greater<int>());
    for (int i=0;i<A.size();i++){
        if (A[i]<n){
            cout << i;
            break;
        }
    }
    return 0;
}