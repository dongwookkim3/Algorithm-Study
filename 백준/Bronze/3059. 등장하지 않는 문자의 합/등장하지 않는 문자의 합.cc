#include <iostream>
#define MAX 26
using namespace std;
int main(void){
    int n;
    cin >> n;
    while(n--){
        int m=0;
        bool ASCII[MAX]={};
        string A;
        cin >> A;
        for (int i=0;i<A.length();i++){
            ASCII[A[i]-65]=1;
        }
        for (int i=0;i<MAX;i++){
            if (ASCII[i]==0){
                m+=i+65;
            }
        }
        cout << m << "\n";
    }
    return 0;
}