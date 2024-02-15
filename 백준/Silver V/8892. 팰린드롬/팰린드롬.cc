#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<string> A;
        int n;
        bool f=false;
        cin >> n;
        while(n--){
            string a;
            cin >> a;
            A.push_back(a);
        }
        for (int i=0;i<A.size();i++){
            for (int j=0;j<A.size();j++){
                if (i==j) continue;
                string B=A[i]+A[j],C=A[i]+A[j];
                reverse(C.begin(),C.end());
                if (B==C){
                    cout << C << "\n";
                    f=true;
                    break;
                }
            }
            if (f){
                break;
            }
        }
        if (!f){
            cout << "0\n";
        }
    }
    return 0;
}