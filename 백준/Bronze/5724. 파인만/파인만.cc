#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int A[MAX+1]={};
    for (int i=1;i<=MAX;i++){
        A[i]=A[i-1]+i*i;
    }
    int t;
    while(cin >> t && t!=0){
        cout << A[t] << "\n";
    }
    return 0;
}