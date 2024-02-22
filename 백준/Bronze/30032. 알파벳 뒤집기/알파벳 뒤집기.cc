#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    while(n--){
        string A;
        cin >> A;
        for (int i=0;i<A.length();i++){
            if (A[i]=='d'){
                if (m==1){
                    A[i]='q';
                }
                else {
                    A[i]='b';
                }
            }
            else if (A[i]=='b'){
                if (m==1){
                    A[i]='p';
                }
                else {
                    A[i]='d';
                }
            }
            else if (A[i]=='q'){
                if (m==1){
                    A[i]='d';
                }
                else {
                    A[i]='p';
                }
            }
            else if (A[i]=='p'){
                if (m==1){
                    A[i]='b';
                }
                else {
                    A[i]='q';
                }
            }
        }
        cout << A << "\n";
    }
    return 0;
}