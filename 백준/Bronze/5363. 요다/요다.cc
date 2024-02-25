#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        vector<string> A;
        string a,b;
        getline(cin,a);
        istringstream iss(a);
        while(getline(iss,b,' ')){
            A.push_back(b);
        }
        for (int i=2;i<A.size();i++){
            cout << A[i] << ' ';
        }
        for (int i=0;i<2;i++){
            cout << A[i] << ' ';
        }
        cout << "\n";
    }
    return 0;
}