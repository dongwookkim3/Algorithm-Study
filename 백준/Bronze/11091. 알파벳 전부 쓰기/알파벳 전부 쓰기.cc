#include <iostream>
#define MAX 26
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        bool B[MAX]={};
        string A;
        getline(cin,A);
        for (int i=0;i<A.length();i++){
            if (A[i]>=65 && A[i]<=90){
                B[A[i]-65]=true;
            }
            else if (A[i]>=97 && A[i]<=122){
                B[A[i]-97]=true;
            }
        }
        for (int i=0;i<MAX;i++){
            if (!B[i]){
                cout << "missing ";
                break;
            }
            else if (i==MAX-1){
                cout << "pangram";
            }
        }
        for (int i=0;i<MAX;i++){
            if (!B[i]){
                cout << char(i+97);
            }
        }
        cout << "\n";
    }
    return 0;
}