#include <iostream>
#include <sstream>
using namespace std;
int main(){
    int m=0;
    string a,b,t;
    while(cin >> t){
        a+=t;
    }
    istringstream iss(a);
    while(getline(iss,b,',')){
        m+=stoi(b);
    }
    cout << m;
    return 0;
}