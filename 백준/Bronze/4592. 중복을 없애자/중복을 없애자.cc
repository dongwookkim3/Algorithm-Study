#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    while(cin >> n && n!=0){
        vector<int> A;
        while(n--){
            int a;
            cin >> a;
            if (A.empty() || (!A.empty() && A.back()!=a)){
                A.push_back(a);
            }
        }
        for (int i=0;i<A.size();i++){
            cout << A[i] << ' ';
        }
        cout << "$\n";
    }
    return 0;
}