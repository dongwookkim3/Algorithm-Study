#include <iostream>
#include <string>
using namespace std;
int main(){
    string A,B;
    cin >> A;
    while(A.length()%3!=0){
        string C=A.insert(0,"0");
        A=C;
    }
    for (int i=0;i<A.length();i+=3){
        if (A.substr(i,3)=="000") B+='0';
        else if (A.substr(i,3)=="001") B+='1';
        else if (A.substr(i,3)=="010") B+='2';
        else if (A.substr(i,3)=="011") B+='3';
        else if (A.substr(i,3)=="100") B+='4';
        else if (A.substr(i,3)=="101") B+='5';
        else if (A.substr(i,3)=="110") B+='6';
        else if (A.substr(i,3)=="111") B+='7';
    }
    cout << B;
    return 0;
}