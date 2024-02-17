#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    while(A.length()%3){
        A.insert(A.begin(),'0');
    }
    for (int i=0;i<A.length();i+=3){
        if (A.substr(i,3)=="000") cout << 0;
        else if (A.substr(i,3)=="001") cout << 1;
        else if (A.substr(i,3)=="010") cout << 2;
        else if (A.substr(i,3)=="011") cout << 3;
        else if (A.substr(i,3)=="100") cout << 4;
        else if (A.substr(i,3)=="101") cout << 5;
        else if (A.substr(i,3)=="110") cout << 6;
        else if (A.substr(i,3)=="111") cout << 7;
    }
    return 0;
}