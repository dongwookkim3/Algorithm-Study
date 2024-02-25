#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    for (int i=1;i<=t;i++){
        vector<string> A;
        string a,b;
        getline(cin,a);
        istringstream iss(a);
        while(getline(iss,b,' ')){
            A.push_back(b);
        }
        cout << "Case #" << i << ": ";
        for (int j=A.size()-1;j>=0;j--){
            cout << A[j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}