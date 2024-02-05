#include <iostream>
#include <string>
using namespace std;
int main(){
    string A;
    getline(cin,A);
    if (A.find("d2")!=string::npos || A.find("D2")!=string::npos){
        cout << "D2";
    }
    else {
        cout << "unrated";
    }
    return 0;
}