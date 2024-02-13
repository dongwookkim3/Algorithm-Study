#include <iostream>
#define MAX 5
using namespace std;
int main(){
    int A[MAX+1]={};
    for (int i=1;i<=MAX;i++){
        cin >> A[i];
    }
    while(A[1]!=1 || A[2]!=2 || A[3]!=3 || A[4]!=4 || A[5]!=5){
        for (int i=2;i<=MAX;i++){
            if (A[i-1]>A[i]){
                int t=A[i-1];
                A[i-1]=A[i];
                A[i]=t;
                for (int j=1;j<=MAX;j++){
                    cout << A[j] << ' ';
                }
                cout << "\n";
            }
        }
    }
    return 0;
}