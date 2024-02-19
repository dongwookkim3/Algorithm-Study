#include <iostream>
#define MAX 26
using namespace std;
int main(){
    string A;
    while(getline(cin,A) && A!="*"){
        bool B[MAX]={};
        for (int i=0;i<A.length();i++){
            if (A[i]>=97 && A[i]<=122){
                B[A[i]-97]=true;
            }
        }
        for (int i=0;i<MAX;i++){
            if (!B[i]){
                cout << "N\n";
                break;
            }
            else if (i==MAX-1){
                cout << "Y\n";
            }
        }
    }
    return 0;
}