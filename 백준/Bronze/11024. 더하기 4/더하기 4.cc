#include <iostream>
#include <sstream>
using namespace std;
int main(){
    int n;
    cin >> n;
    getchar();
    while(n--){
        int m=0;
        string A,B;
        getline(cin,A);
        istringstream iss(A);
        while(getline(iss,B,' ')){
            m+=stoi(B);
        }
        cout << m << "\n";
    }
    return 0;
}