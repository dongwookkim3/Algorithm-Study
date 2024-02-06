#include <iostream>
using namespace std;
int main(){
    string A,B;
    int m=0;
    getline(cin,A);
    getline(cin,B);
    if (A.length()<B.length()){
        cout << 0;
        return 0;
    }
    for (int i=0;i<=A.length()-B.length();i++){
        if (A.substr(i,B.length())==B){
            m++;
            i+=B.length()-1;
        }
    }
    cout << m;
    return 0;
}