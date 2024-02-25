#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 26
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        vector<int> B(MAX,0);
        string A;
        getline(cin,A);
        for (int i=0;i<A.length();i++){
            if (A[i]==' ') continue;
            B[A[i]-97]++;
        }
        vector<int> C=B;
        sort(C.begin(),C.end(),greater<int>());
        if (C[0]==C[1]){
            cout << "?\n";
        }
        else {
            cout << char(max_element(B.begin(),B.end())-B.begin()+97) << "\n";
        }
    }
    return 0;
}