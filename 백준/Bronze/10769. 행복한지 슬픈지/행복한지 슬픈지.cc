#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int a=0,b=0;
    string A;
    getline(cin,A);
    if (A.length()<3){
        cout << "none";
        return 0;
    }
    for (int i=0;i<A.length()-3;i++){
        if (A.substr(i,3)==":-)"){
            a++;
        }
        else if (A.substr(i,3)==":-("){
            b++;
        }
    }
    if (a==0 && b==0){
        cout << "none";
    }
    else if (a==b){
        cout << "unsure";
    }
    else if (a>b){
        cout << "happy";
    }
    else if (a<b){
        cout << "sad";
    }
    return 0;
}