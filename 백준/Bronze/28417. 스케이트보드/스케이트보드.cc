#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A;
    int n;
    cin >> n;
    while(n--){
        vector<int> B,C;
        for (int i=0;i<2;i++){
            int a;
            cin >> a;
            B.push_back(a);
        }
        for (int i=0;i<5;i++){
            int a;
            cin >> a;
            C.push_back(a);
        }
        sort(B.begin(),B.end());
        sort(C.begin(),C.end());
        A.push_back(B.back()+C.back()+C[3]);
    }
    cout << *max_element(A.begin(),A.end());
    return 0;
}