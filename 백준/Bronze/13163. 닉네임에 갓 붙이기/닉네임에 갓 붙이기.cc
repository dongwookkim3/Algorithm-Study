#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        vector<string> A;
        string B,C;
        getline(cin,B);
        istringstream iss(B);
        while(getline(iss,C,' ')){
            A.push_back(C);
        }
        cout << "god";
        for (int i=1;i<A.size();i++){
            cout << A[i];
        }
        cout << "\n";
    }
    return 0;
}