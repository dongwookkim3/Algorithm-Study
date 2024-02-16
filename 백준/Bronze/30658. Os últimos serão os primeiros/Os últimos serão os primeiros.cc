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
            A.push_back(a);
        }
        for (int i=A.size()-1;i>=0;i--){
            cout << A[i] << "\n";
        }
        cout << 0 << "\n";
    }
    return 0;
}