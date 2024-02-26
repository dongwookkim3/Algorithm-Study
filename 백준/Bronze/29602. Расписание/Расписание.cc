#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A;
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    vector<int> B=A;
    sort(B.begin(),B.end());
    for (int i=0;i<A.size();i++){
        for (int j=0;j<B.size();j++){
            if (A[i]==B[j]){
                cout << j+1 << ' ';
                B[j]=0;
                break;
            }
        }
    }
    return 0;
}