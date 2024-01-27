#include <iostream>
using namespace std;
int main(){
    string A;
    getline(cin,A);
    for (int i=0;i<A.length();i++){
        if (A[i]<65){
            cout << (char)A[i];
        }
        else {
            if (A[i]>90){
                if (A[i]+13>122){
                    cout << (char)(A[i]-13);
                }
                else {
                    cout << (char)(A[i]+13);
                }
            }
            else {
                if (A[i]+13>90){
                    cout << (char)(A[i]-13);
                }
                else {
                    cout << (char)(A[i]+13);
                }
            }
        }
    }
    return 0;
}