#include <iostream>
#include <string>
using namespace std;
int main(){
    string A;
    while(getline(cin,A) && A!="EOI"){
        for (int i=0;i<A.length();i++){
            if (A[i]<=90){
                A[i]+=32;
            }
        }
        if (A.find("nemo")!=string::npos){
            cout << "Found\n";
        }
        else {
            cout << "Missing\n";
        }
    }
    return 0;
}