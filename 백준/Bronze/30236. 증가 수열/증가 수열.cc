#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> A,B;
        int n;
        cin >> n;
        while(n--){
            int a;
            cin >> a;
            A.push_back(a);
        }
        B.push_back(1+(A.front()==1));
        for (int i=1;i<A.size();i++){
            B.push_back(B.back()+1+(B.back()+1==A[i]));
        }
        cout << B.back() << "\n";
    }
    return 0;
}