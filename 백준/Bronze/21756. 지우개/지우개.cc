#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> A,B;
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        A.push_back(i);
    }
    while(A.size()!=1){
        for (int i=0;i<A.size();i++){
            if (i%2){
                B.push_back(A[i]);
            }
        }
        A=B;
        B.clear();
    }
    cout << A.front();
    return 0;
}